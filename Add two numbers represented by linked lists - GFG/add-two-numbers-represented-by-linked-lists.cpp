//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    struct Node* reverse(struct Node* head){
        struct Node* current = head, *prev = NULL, *next = NULL;
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    
    int length(struct Node* head){
        int count = 0;
        struct Node* current = head;
        while(current != NULL){
            count++;
            current = current->next;
        }
        return count;
    }
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
      
        
            // step1:  find the larger list
    if(length(num1) < length(num2)){
        // swappinf logic
       struct Node* temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // step2: reverse the both list
    struct Node* f = reverse(num1);
    struct Node* f1 = f;
    struct Node* s = reverse(num2);
    struct Node* s1 = s;
   

    // step3: initialize pointers
    int carry = 0;
    Node* prev = NULL;

    // step4: interate in the reverse list and add them
    while(f1 != NULL || s1 != NULL){
        int fd = 0, sd = 0;
            if(f1 == NULL){
                fd = 0;
            }else{
                fd = f1->data;
            }
            
            if(s1 == NULL){
                sd = 0;
            }else{
                sd = s1->data;
            }
            int sum = fd + sd + carry;
            carry = sum/10;
            f1->data = sum%10;
            prev = f1;
            f1 = f1->next;
            if(s1 != NULL){
                s1 = s1->next;
            }

    }

    // if carry is 1
    if(carry == 1){
        // create new node of caary
        struct Node* newNode = new Node(1);
        prev -> next = newNode;
    }

    return reverse(f);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private: 
    Node* reverse(Node* head){
        
       
        
        Node* curr = head;
        Node* prev = NULL;
        Node* frwd = NULL;
        
        while(curr != NULL){
            frwd = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = frwd;
        }
        return prev;
        
    }
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
       // reverse the list
       Node* newHead = reverse(head);
       Node* curr = newHead;
       Node* prev= NULL;
       Node* final = newHead;
       int carry = 0;
       
       while(curr != NULL){
           int sum = 0;
           
            if(prev == NULL){
               // add 1 to list
               sum = curr -> data + 1;
            }else{
               // add carry to list
               sum = curr -> data + carry;
            }
            carry = sum / 10;
            curr -> data = sum % 10;
            
            // adjust the pointers
            prev = curr;
            curr = curr -> next;
           
        }
        
        // carry is getting 1
        if(carry == 1){
            // form new node
            Node* newNode = new Node(1);
            prev ->next = newNode;
        }
        return reverse(final);
        
       
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends
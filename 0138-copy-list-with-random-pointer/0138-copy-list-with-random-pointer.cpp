/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insert(Node * &head, Node* &tail,int val){
        Node*temp=new Node(val);
        if(head==NULL){
            tail=temp;
            head=temp;
        }else{
            tail->next=temp;
            tail=temp;
        }
    }

    Node* copyRandomList(Node* head) {

        // step1 = create a clone list
        Node* temp = head;
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        // Node* originalHead = NULL;
        // Node* originalTail = NULL;
        while(temp!= NULL){
            insert(cloneHead,cloneTail,temp->val);
            temp=temp->next;
        }

        // step 2: clone node add in b/w original list
        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while(originalNode != NULL && cloneNode!= NULL){
            
            //original list
            Node*next = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = next;

            // clone list
            next = cloneNode -> next;
            cloneNode -> next =originalNode;
            cloneNode = next;
        }

        // step3: random pointer copy
        temp = head;
        while(temp != NULL){
            if(temp -> next != NULL && temp ->random != NULL){
                // temp -> next -> random = temp -> random;
                // temp -> random -> next = temp -> random;
                temp->next->random=(temp!=NULL)?temp->random->next:NULL;
            }
            temp = temp -> next -> next;
        }


        // step4: revert change in step 2
        originalNode = head;
        cloneNode = cloneHead;

        while(originalNode != NULL && cloneNode != NULL){
            originalNode -> next = cloneNode -> next;
            originalNode = originalNode -> next;

            if(originalNode != NULL){
                cloneNode -> next = originalNode -> next;
            }
             cloneNode = cloneNode -> next;
           
        }
        // step5: return ans
        return cloneHead;
    }
};
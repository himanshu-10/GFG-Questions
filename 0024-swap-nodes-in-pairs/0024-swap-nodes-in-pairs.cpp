/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        // approach 1

        // if(head == NULL || head -> next == NULL )
        //     return head;
          
        // ListNode* curr = head;
        // while(curr != NULL && curr -> next != NULL){
        //     swap(curr ->val , curr -> next -> val);
        //     curr = curr -> next -> next ;
        // }
        // return head;

        // approach 2(recursive)

        
        if(head == NULL || head -> next == NULL )
            return head;
        else{
            ListNode* curr = head;
            swap(curr -> val , curr -> next -> val);
            swapPairs(curr -> next -> next);
        }

        return head;
       
        
    }
};
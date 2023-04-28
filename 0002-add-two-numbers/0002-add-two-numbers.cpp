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
// private:

//     ListNode* reverse(ListNode* head){
        
//         ListNode* curr = head;
//         ListNode* prev = NULL;
//         ListNode* next = NULL;

//         while(curr != NULL){
//             next = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }

//     ListNode* insertAtTail(ListNode* &head,ListNode* &tail,int value){

//         ListNode* temp = new ListNode(value);
//         if(head == NULL){
//             head = temp;
//             tail = temp;
//            // return head;
//         }else{
//            tail -> next = temp;
//            tail = temp;
//         }
//          return head;
//     }

//     ListNode* add(ListNode* l1, ListNode* l2){
//         int carry = 0;
//         ListNode* ansHead = NULL;
//         ListNode* ansTail = NULL;

//         while(l1 != NULL && l2 != NULL){

//             // list has same size
//             int sum = carry + l1 -> val + l2 -> val;
//             int digit = sum % 10;
//             // create the node of respective digit and add to ans LL
//             insertAtTail(ansHead,ansTail,digit);
//             // find carry
//             carry = sum / 10;
//             l1 = l1 -> next;
//             l2 = l2 -> next;

//         }

//         // size of 1st LL is larger
//         while(l1 != NULL){

//             int sum = carry + l1 -> val;
//             int digit = sum % 10;
//             // create the node of respective digit and add to ans LL
//             insertAtTail(ansHead,ansTail,digit);
//             // find carry
//             carry = sum / 10;
//             l1 = l1 -> next;
//         }

//         // size of 2nd LL is larger
//         while(l2 != NULL){

//             int sum = carry + l2 -> val;
//             int digit = sum % 10;
//             // create the node of respective digit and add to ans LL
//             insertAtTail(ansHead,ansTail,digit);
//             // find carry
//             carry = sum / 10;
//             l2 = l2 -> next;
//         }

//         // extra carry
//         while(carry != 0){
//             int sum = carry;
//              int digit = sum % 10;
//             // create the node of respective digit and add to ans LL
//             insertAtTail(ansHead,ansTail,digit);
//             // find carry
//             carry = sum / 10;
//         }

//         return ansHead;
//     }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

//         // step 1: reverse the list
//         l1 = reverse(l1);
//         l2 = reverse(l2);
//         // step2: add 2 list
//         ListNode* ans = add(l1,l2);
//         // step3: again reverse the list
    
//         // step4: return the ans
//         return ans;
        
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    int carry = 0;
    while (l1 || l2 || carry) {
        int val1 = l1 ? l1->val : 0;
        int val2 = l2 ? l2->val : 0;
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    return dummy->next;

    }
};
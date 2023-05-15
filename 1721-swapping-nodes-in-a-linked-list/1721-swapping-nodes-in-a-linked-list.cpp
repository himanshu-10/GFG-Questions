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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* curr2 = head;
        int count = 0;
        while(curr != NULL){
            count = count +1;
            curr = curr -> next;
        }
        curr = head;
        int counter = 1;
        while(counter < k && curr -> next != NULL){
            curr = curr -> next;
            counter++;
        }
        counter = 1;
        while(counter <= count-k && curr2 -> next != NULL){
            curr2 = curr2 -> next;
            counter++;
        }

        swap(curr -> val, curr2-> val);
        return head;

    }
};
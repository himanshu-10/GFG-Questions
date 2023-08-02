/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // 4 -> 5 -> 1 -> 6 -> null   , suppose 1 to be node
        node -> val = node -> next -> val;
        // 4 -> 5 -> 6 -> 6 -> null
        
        node -> next = node -> next -> next;
        // 4 -> 5 -> 6 -> null
        
    }
};
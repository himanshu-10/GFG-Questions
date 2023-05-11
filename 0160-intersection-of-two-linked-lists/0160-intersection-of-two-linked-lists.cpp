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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
        // APPROACH 1
        // int lengthOfA = 0;
        // int lengthOfB = 0;
        
        // step 1 find length of list
        // ListNode* temp1 = headA;
        // ListNode* temp2 = headB;

        // while(temp1 != NULL){
        //     lengthOfA++;
        //     temp1 = temp1 -> next;
        // }
        // while(temp2 != NULL){
        //     lengthOfB++;
        //     temp2 = temp2 -> next;
        // }

        // step 2 : calculate the diff b/w them

        // int diff = abs(lengthOfA - lengthOfB);

        //step 3: according to diff. move the head pointer (jitne ka diff hai utna move kro head ko)
        // if(lengthOfA > lengthOfB){
        //     while(diff){
        //         headA = headA -> next;
        //         diff--;
        //     }
        // }else{
        //     while(diff){
        //         headB = headB -> next;
        //         diff--;
        //     }
        // }

        // // step4: find intersection through pointer collision

        // while(headA != NULL && headB != NULL){
        //     if(headA == headB){
        //         return headA;
        //     }
        //     else{
        //         headA = headA -> next;
        //         headB = headB -> next;
        //     }
        // }
        // return NULL;

        // APPROACH 2
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        while(temp1 != temp2){

            if(temp1 == NULL){
                temp1 = headB;
            }else{
                temp1 = temp1 -> next;
            }

            if(temp2 == NULL){
                temp2 = headA;
            }else{
                temp2 = temp2 -> next;
            }

        }
        return temp1;

 
    }
};
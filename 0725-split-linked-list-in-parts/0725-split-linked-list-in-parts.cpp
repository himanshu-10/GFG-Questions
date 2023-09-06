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
    
    int getlength(ListNode* head){
        
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            cnt++;
            temp = temp -> next;
        }
        return cnt;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        

        // get length
        int listlength=getlength(head);
        
        // each part size
        int partsize = listlength/k;
        // extra nodes
        int extranodes = listlength%k;
        
        vector<ListNode*> ans;
        
        ListNode*curr = head, *prev = NULL;
        
        
        while(head)
        {
            
            int eachpartsize=partsize;
            ans.push_back(curr);
            
            
            while(eachpartsize>0)
            {
                prev=curr;
                curr=curr->next;
                eachpartsize--;
            }
            
            // check for extra nodes
            if(extranodes!=0 && curr!=NULL)
            {
                extranodes--;
                prev=curr;
                curr=curr->next;
            }
                
            
            if(prev!=NULL)
            {
                head=curr;
                prev->next=NULL;
            }
        }
        // check size of ans
        while(ans.size()!=k)
            ans.push_back(NULL);
 
        return ans;
        
        
    }
};
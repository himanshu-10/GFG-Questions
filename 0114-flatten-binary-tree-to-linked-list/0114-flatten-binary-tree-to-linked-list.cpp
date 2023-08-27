/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        
        // using MORRISH TRAVERSAL ALGORITH
        TreeNode* curr = root;
        
        while(curr != NULL){
            if(curr -> left){
             
                // find predecesor
                TreeNode* pred =curr -> left;
                while(pred -> right)
                    pred = pred ->  right;
                
                // adjust the pointers
                pred -> right = curr -> right;
                curr -> right = curr -> left;
                
                 curr -> left = NULL;           // left child pointer is always null.
                
            }
            curr = curr -> right;
        }
    }
};
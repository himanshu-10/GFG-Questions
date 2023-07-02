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
    int minDepth(TreeNode* root) {
        // base case
        if(root == NULL){
            return 0;
        }
        
        int leftHeight = minDepth(root -> left);
        int rightHeight = minDepth(root -> right);
        
        return 1+(min(leftHeight,rightHeight) ? min(leftHeight,rightHeight) : max(leftHeight,rightHeight));
    }
};
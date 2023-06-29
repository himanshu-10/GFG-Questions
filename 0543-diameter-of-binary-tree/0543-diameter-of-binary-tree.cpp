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

    
    int maxDepth(TreeNode* root) {
        
        // base case
         // if(!root) return 0;
        if(root == NULL){
            return 0;
        }
        
        // recursive call 
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        
        
        
        return max(maxLeft, maxRight)+1;
    }
    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        // base case
        if(root == NULL){
            return 0;
        }
        
        int op1 = diameterOfBinaryTree(root -> left);
        int op2 = diameterOfBinaryTree(root -> right);
        int op3 = maxDepth(root -> left) + maxDepth(root -> right) ;
        
        int ans = max(op1, max(op2,op3));
        return ans;
    }
};
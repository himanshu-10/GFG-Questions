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
    
    void inverse(TreeNode* root){
        
        // base case
        if(root == NULL)
            return ;
        
        // small calculation
        swap(root->left,root-> right);
        
        // recursive call
        inverse(root -> left);
        inverse(root -> right);
        
    }
    TreeNode* invertTree(TreeNode* root) {
        inverse(root);
        return root;
    }
};
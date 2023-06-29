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
private: 
    int height(TreeNode* root){
        
        // base cae
        if(root == NULL){
            return true;
        }
        
        int lefthgt = height(root -> left);
        int righthgt = height(root -> right);
        
        int ans = max(lefthgt,righthgt) + 1;
        return ans;
    }
public:
    bool isBalanced(TreeNode* root) {
        
        // basecase
        if(root == NULL){
            return true;
        }
        
        bool left = isBalanced(root -> left);
        bool right = isBalanced(root -> right);
        
        bool diff = abs(height(root -> left) - height(root -> right)) <= 1;
        
        if(left && right && diff){
            return true;
        }else{
            return false;
        }
    }
};
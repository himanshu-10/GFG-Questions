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
    
    void inorder(TreeNode* root, int& low,int& high,int&ans){
        
        if(root == NULL)
            return ;
        
        //left
        inorder(root -> left,low,high,ans);
        // root
        if(root -> val >= low && root -> val <= high){
            ans+=root-> val;
        }
        //right
        inorder(root-> right,low, high,ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        int sum = 0;
        inorder(root,low,high,sum);
        return sum;
    }
};
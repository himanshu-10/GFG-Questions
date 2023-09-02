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
    void inorder(TreeNode* root,vector<int>& inorderVal){
        
        if(root == NULL)
            return;
        
        inorder(root -> left, inorderVal);
        inorderVal.push_back(root -> val);
        inorder(root -> right, inorderVal);
        
    }
    
    TreeNode* inorderToBST(int s, int e, vector<int> inorderVal){
        
        // base case
        if(s>e)
            return NULL;
        
        // find mid
        int mid = s+ (e-s)/2;
        // create node
        TreeNode* root = new TreeNode(inorderVal[mid]);
        
        // recursion
        //left call
        root -> left = inorderToBST(s,mid-1,inorderVal);
        // right call
        root -> right = inorderToBST(mid+1,e,inorderVal);
        
        return root;
    }
    
    
    TreeNode* balanceBST(TreeNode* root) {
        
        vector<int>inorderVal;
        inorder(root,inorderVal);
        return inorderToBST(0,inorderVal.size()-1,inorderVal);
        
        
    }
};
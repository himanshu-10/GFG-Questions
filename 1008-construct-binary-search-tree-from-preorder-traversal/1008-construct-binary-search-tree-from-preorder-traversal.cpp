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
    
    TreeNode* solve(vector<int>& preorder, int mini, int maxi, int &i){
        
        // base case
        if(i >= preorder.size()){
            return  NULL;
        }
        
        if(mini < preorder[i] && preorder[i] > maxi){
            return NULL;
        }
        
        // create Node and increment i
        TreeNode* root = new TreeNode(preorder[i++]);
        
        // recursive call
        
        root -> left = solve(preorder, mini ,root -> val, i);
        root -> right = solve(preorder, root -> val, maxi , i);
        
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        int maxi = INT_MAX;
        int mini = INT_MIN;
        int i = 0;
        
        return solve(preorder,mini,maxi,i);
        
        
    }
};
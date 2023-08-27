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
    
    TreeNode* solve(vector<int> inorder, vector<int> postorder, int &index, int inStart, int inEnd,                                        unordered_map<int,int>&m){
        // base case
        if(index < 0 || (inStart > inEnd) ){
            return NULL;
        }
        // if(inStart > inEnd){
        //     return NULL;
        // }
        
        //pick element
        int element = postorder[index--];
        
        // make node
        TreeNode* root = new TreeNode(element);
        
        // find that element in inorder
        int position = m[root -> val];
        
        // recursive call
        root -> right = solve(inorder, postorder, index, position +1,inEnd, m);
        root -> left = solve(inorder, postorder, index, inStart, position-1, m);
        
        return root;
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int postorderIndex = postorder.size()-1;
        
        // map the inorder element with its index
        unordered_map<int,int>m;
        for(int i = 0; i< inorder.size();i++){
            m[inorder[i]] = i;
        }
        
        // inorder - postorder - postorderindex - inorderstart - inorderend - map
        TreeNode* ans = solve(inorder, postorder, postorderIndex, 0, inorder.size()-1, m);
        return ans;
    }
};
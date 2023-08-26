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
    
    int findPos(vector<int>inorder,int element){
        for(int  i = 0;i<inorder.size();i++){
            if(inorder[i] == element){
                return i;
            }
        }
        return -1;
    }
    
    TreeNode* solve(vector<int> preorder, vector<int> inorder, int &index, int inorderStart,int                                                                 inorderEnd,unordered_map<int,int>&m){
            
        // base case
        if(index > preorder.size() ){
            return NULL;
        }
        
        if(inorderStart > inorderEnd){
            return NULL;
        }
        // pick starting element from preorder & increment index
        int element = preorder[index++];
        // make root
        TreeNode* root = new TreeNode(element);
        // find position of root in inorder
        // int position = findPos(inorder,element);
        int position = m[root -> val];
        
        // recursive call
        root -> left = solve(preorder,inorder,index,inorderStart,position-1,m);
        root -> right = solve(preorder,inorder,index,position+1,inorderEnd,m);
        
        return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       
        int preOrderIndex = 0;
        
        // mapp the element in inoreder with its index
        unordered_map<int,int>m;
        for(int i = 0;i<inorder.size();i++){
            m[inorder[i]] = i;
        }
        
        // preorder - inorder - preorderindex - startIndexOfInorder - endIndexOfInorder
        TreeNode*ans = solve(preorder, inorder, preOrderIndex, 0, inorder.size()-1,m);
        return ans;
    }
};
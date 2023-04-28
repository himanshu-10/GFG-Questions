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
    void preorder(TreeNode* root , vector<int>&node){
        
        // base case
        if(root == NULL){
            return;
        }
        
        // preorder [ROOT DATA , LEFT , RIGHT]
        
        // small calculation part
        node.push_back(root -> val);    // ROOT DATA
        
        // recursive call
        preorder(root -> left,node);    // LEFT PART
        preorder(root -> right,node);   // RIGHT PART
        
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> nodes;
        preorder(root,nodes);
        return nodes;
        
    }
};
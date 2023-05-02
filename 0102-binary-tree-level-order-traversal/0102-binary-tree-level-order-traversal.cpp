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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        
        // if root is empty/NULL
        if(root == NULL){
            return ans;
        }
        
        queue<TreeNode*>q;  // taking ques DS
        q.push(root);       // initialize always with root element
        
        while(! q.empty()){
            
            int size = q.size();
            vector<int>level;
            
            for(int i = 0; i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                
                // check for left node
                if(node -> left != NULL){
                    q.push(node -> left);
                }
                
                // check for right side
                if(node -> right != NULL){
                    q.push(node -> right);
                }
                
                level.push_back(node -> val);
                
            }
            ans.push_back(level);
        }
        return ans;
        
    }
};
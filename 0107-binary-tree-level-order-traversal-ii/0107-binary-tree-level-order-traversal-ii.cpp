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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        
        if(root == NULL)
            return ans;
        
        q.push(root);
        while(!q.empty()){
            
            int len = q.size();
            vector<int>level;
            
            for(int i = 0;i<len;i++){
                
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp -> left != NULL)
                    q.push(temp -> left);
                
                if(temp -> right != NULL)
                    q.push(temp -> right);
                
                level.push_back(temp -> val);      
            }
            ans.push_back(level);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
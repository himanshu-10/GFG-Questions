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
    vector<int> rightSideView(TreeNode* root) {
         vector<int>ans;
        if(root == NULL)
            return ans;
        
        // level , root -> data
        map<int,int>m;
        // node - level
        queue<pair<TreeNode*,int>>q;
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            
            auto temp = q.front();
            q.pop();
            TreeNode* frontNode = temp.first;
            int level = temp.second;
            
            if(m.find(level) == m.end())
                m[level] = frontNode -> val;
            
            if(frontNode -> right)
                q.push(make_pair(frontNode-> right,level+1));
            if(frontNode -> left)
                q.push(make_pair(frontNode -> left,level+1));
                
        }
        
        for(auto i:m)
            ans.push_back(i.second);
        
        return ans;
    }
};
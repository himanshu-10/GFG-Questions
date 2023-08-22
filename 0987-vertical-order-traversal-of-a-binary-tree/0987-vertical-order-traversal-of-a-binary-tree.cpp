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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root == NULL)
            return ans;
        
        // hd -- level-- nodelist
        map<int,map<int,multiset<int>>>nodes;
        
        // node -- level -- hd
        queue<pair<TreeNode*,pair<int,int>>>q;
        int hd = 0;
        int level = 0;
        
        q.push({root,{0,0}});
        
        while(!q.empty()){
            int n = q.size();
            while(n--){
                auto temp = q.front();
                q.pop();
                
                TreeNode* frontNode = temp.first;
                int level = temp.second.first;
                int hd = temp.second.second;
                
                nodes[hd][level].insert(frontNode -> val);
                
                if(frontNode -> left)
                    q.push({frontNode -> left,{level+1,hd-1}});
                if(frontNode -> right)
                    q.push({frontNode -> right,{level+1,hd+1}});
                
            }
        }
        
        for(auto i: nodes){
            vector<int>x;
            for(auto j : i.second){
                for(auto k: j.second){
                    x.push_back(k);
                }
            }
            ans.push_back(x);
        }
        
        return ans;  
            
    }
};
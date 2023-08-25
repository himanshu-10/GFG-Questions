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
    
        void solve(TreeNode* root,int k, int &count,vector<int>&path){
        
        // base case
        if(root == NULL)
            return;
        
        // push data into path array
        path.push_back(root -> val);
        
        // recursive call
        solve(root -> left,k,count,path);
        solve(root -> right,k,count,path);
        
        // calculation
        long long sum = 0;
        int size = path.size();
        for(int i = size-1; i>=0;i--){
            sum+=path[i];
            if(sum == k)
                count++;
        }
        // wapas jayenge to array me se us element ko hatana bhi padega n
        path.pop_back();
        
        
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        int count = 0;
        solve(root,targetSum,count,path);
        return count;
    }
};
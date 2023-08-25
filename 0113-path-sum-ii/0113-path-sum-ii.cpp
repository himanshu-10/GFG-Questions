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
    
    void solve(TreeNode* root, int targetSum,vector<vector<int>>&res,vector<int>&path){
        
        // base case
        if(root == NULL)
            return;
        
        path.push_back(root -> val);
        
          if(root->left == NULL && root->right==NULL){
            long int sum = 0;
            int size = path.size();
            for(int i = size-1 ; i >=0 ; i--){
                sum += path[i];
            }
            if(sum == targetSum)
                res.push_back(path);
        }
        
//         // recursive call
        solve(root -> left,targetSum,res,path);
        solve(root -> right,targetSum,res,path);
        
//         // calculation
//         int sum = 0;
//         // int size = path.size();
//         for(int i = 0;i<path.size();i++){
//             sum+=path[i];
//             if(sum == targetSum)
//                 res.push_back(path);
//         }
        
        path.pop_back();
        
        
        // base case
//         if(root == NULL)
//             return;
        
//         if(root -> left == NULL && root -> right == NULL){
//             path.push_back(root -> val);
//             sum+= root -> val;
            
//             if(sum == targetSum){
//                 res.push_back(path);
//             }
//             sum-=root -> val;
//             path.pop_back();
//         }
        
//         // small cal.
//         path.push_back(root -> val);
//         sum+=root -> val;
        
//         // resursive call
//         solve(root -> left,targetSum,res,path,sum);
//         solve(root -> right,targetSum,res,path,sum);
        
//         // backtracking time removal of element
//         path.pop_back();
//         sum-=root -> val;
        
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        
        vector<vector<int>>res;
        vector<int>path;
        // int sum = 0;
        solve(root,targetSum,res,path);
        return res;
    }
};
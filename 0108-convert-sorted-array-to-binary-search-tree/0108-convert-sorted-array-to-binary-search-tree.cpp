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
    TreeNode* helper(vector<int>& nums,int s,int e){
        
        int mid = s + (e-s)/2;
        if(s <= e){
            // create node of mid val
            TreeNode* root = new TreeNode(nums[mid]);
            // left traversal
            root -> left = helper(nums,s,mid-1);
            // right traversal
            root -> right = helper(nums,mid+1,e);
            
            return root;
        }
        return NULL;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size()-1;
        return helper(nums,0,n);
    }
};
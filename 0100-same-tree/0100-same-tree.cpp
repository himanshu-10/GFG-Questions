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
    bool isSameTree(TreeNode* p, TreeNode* q) {
         // If both p and q are null, return true
        if (p == nullptr && q == nullptr) {
            return true;
        }
        // If one of p or q is null, return false
        if (p == nullptr || q == nullptr) {
            return false;
        }
        // If the values at p and q are not equal, return false
        if (p->val != q->val) {
            return false;
        }
        // Recursively check if the left and right subtrees of p and q are the same
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
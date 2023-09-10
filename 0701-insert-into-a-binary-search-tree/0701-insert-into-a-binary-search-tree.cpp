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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        
        // step 1: check for NULL
        // if root is not present, make a new node and return
               
        // step 2: root  -> data < given val , insert into right
        // step 3: root -> data > given val, insert into left
        
        if(root == NULL){                   // step 1
            return new TreeNode(val);
        }else if(val > root -> val){        // step 2
            root -> right = insertIntoBST(root -> right, val);
        }else {                             // step 3
            root -> left = insertIntoBST(root -> left, val);
        }
        
        return root;
    }
};
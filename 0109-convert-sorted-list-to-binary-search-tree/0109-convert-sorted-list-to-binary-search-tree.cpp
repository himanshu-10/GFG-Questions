/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
void create(TreeNode* &root, vector<int> &arr, int s, int e){
        if(s>e) return;
        int mid = (s+e)/2;
        root = new TreeNode(arr[mid]);
        create(root->left, arr, s, mid-1);
        create(root->right, arr, mid+1 , e);
    }
    TreeNode* sortedListToBST(ListNode* head) {
        TreeNode* root = NULL;
        vector<int> arr;
        while(head) {
        arr.push_back(head->val);
        head=head->next;
        }
        create(root, arr, 0, arr.size()-1);
        return root;
    }
};
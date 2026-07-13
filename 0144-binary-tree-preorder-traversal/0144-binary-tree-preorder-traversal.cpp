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
    void helper(vector<int> &store ,TreeNode* root ){
        if(root == NULL) return;
        store.push_back(root->val);
        helper(store,root->left);
        helper(store,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>store;
        helper(store,root);
        return store;
    }
};
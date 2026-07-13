
class Solution {
public:
void helper(vector<int> &store ,TreeNode* root ){
        if(root == NULL) return;
        helper(store,root->left);
        store.push_back(root->val);
        helper(store,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>store;
        helper(store,root);
        return store;       
    }
};
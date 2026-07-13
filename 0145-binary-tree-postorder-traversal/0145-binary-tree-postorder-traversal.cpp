
class Solution {
public:void helper(vector<int> &store ,TreeNode* root ){
        if(root == NULL) return;
        helper(store,root->left);
        helper(store,root->right);
        store.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>store;
        helper(store,root);
        return store;  
    }
};
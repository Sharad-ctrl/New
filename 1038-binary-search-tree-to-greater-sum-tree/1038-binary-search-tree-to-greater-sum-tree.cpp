class Solution {
public:
int sum = 0;
    void ReverseInOrder(TreeNode* root){
        if(root == NULL) return;
        ReverseInOrder(root->right);
        root->val+=sum;
        sum = root->val;
         ReverseInOrder(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
       ReverseInOrder(root);
       return root;
        
    }
};
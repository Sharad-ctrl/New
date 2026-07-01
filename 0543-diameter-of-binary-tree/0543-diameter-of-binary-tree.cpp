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
    int Level(TreeNode* root){
    if(root == NULL) return 0;
    int ans = 1 + max(Level(root->left) , Level(root->right));
    return ans;
}
    void helper(TreeNode* root , int &mxdia){
        if(root ==NULL) return;
        int dia = Level(root->left)+Level(root->right);
        mxdia = max(dia,mxdia);
        helper(root->left,mxdia);
        helper(root->right,mxdia);
            }
    int diameterOfBinaryTree(TreeNode* root) {
        int mxdia = 0;
        helper(root,mxdia);
        return mxdia;
    }
};
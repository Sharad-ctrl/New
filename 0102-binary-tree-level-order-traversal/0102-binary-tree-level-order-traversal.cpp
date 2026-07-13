
class Solution {
public:
    int Level(TreeNode* root){
    if(root == NULL) return 0;
    int ans = 1 + max(Level(root->left) , Level(root->right));
    return ans;
}
void nthLevel(TreeNode* root , int currLevel , int reqLevel , vector<int>&store){
    if(root == NULL) return ;
    if(reqLevel == currLevel)
    {
         store.push_back(root->val);
         return;
    }
    nthLevel(root->left,currLevel+1,reqLevel,store);
    nthLevel(root->right,currLevel+1,reqLevel,store);
}
    vector<vector<int>> levelOrder(TreeNode* root) {
            vector<vector<int>> ans;
            int x = Level(root);
            for(int i= 1;i<=x;i++){
            vector<int>arr;
            nthLevel(root , 1 , i, arr);
            ans.push_back(arr);    
            }
            return ans;
    }
};
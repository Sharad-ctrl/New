class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        int smx = INT_MIN;
        int indx;
        for(int i=0;i<n;i++){
           if(nums[i]>mx){
            mx = nums[i];
            indx = i;
           }
        }
        for(int i=0;i<n;i++){
           if(nums[i]>smx && indx != i) smx = nums[i];
        }
        return (mx-1)*(smx-1);
    }
};
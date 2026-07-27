class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int m = n-k;
        int element;
        for(int i = 0;i<=m;i++){
            element = nums[i];
        }
        return element;
    }
};
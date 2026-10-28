class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n = nums.size();
        int peak = 0;
        int valley = 0;
        for(int i=1;i<n-1;i++){
            if(nums[i] >nums[i-1] && nums[i] > nums[i+1] ) peak = peak+nums[i];
            if(nums[i] <nums[i-1] && nums[i] < nums[i+1] ) valley = valley+nums[i];
        }
        int ans = peak - valley;
        return ans;
    }
};
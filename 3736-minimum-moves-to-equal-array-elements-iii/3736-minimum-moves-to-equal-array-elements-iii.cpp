class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MIN;
        for(int i=0;i<n;i++){
            mn = max(mn,nums[i]);
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(nums[i] < mn){
                count = count + (mn - nums[i]);
            }
        }
        return count;
    }
};
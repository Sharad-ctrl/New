class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum+nums[i];
        }
        int check = 0;
        int pivindx = -1 ;
        for(int i = 0;i<n;i++){
            check = check+nums[i];
            if(sum-check == check-nums[i]) {
                pivindx = i;
                break;
            }
        }
        return pivindx;
    }
};
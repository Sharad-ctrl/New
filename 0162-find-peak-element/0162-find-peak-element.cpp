class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<int>copy;
        int n = nums.size();
        for(int i=0;i<n;i++){
            copy.push_back(nums[i]);
        }
        sort(copy.begin(),copy.end());
        int a = copy[n-1];
        int ans;
        for(int i=0;i<n;i++){
            if(nums[i] == a) {
                ans = i;
                break;
            }
        }
        return ans;

    }
};
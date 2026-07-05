class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
       vector<int> pair;
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i] + nums[j] == target && i<=j){
                pair.push_back(i);
                pair.push_back(j);

            }
        }
       }
       return pair;
    }
};

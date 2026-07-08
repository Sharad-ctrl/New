class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int product = 1;
        int count = 0;
        for(int i=0;i<n;i++){
           if(nums[i]== 0){
            count++;
            continue;
           }
            product = product*nums[i];
        }
        if(count == n) product = 0;
        for(int i=0;i<n;i++){
            int x = product;
            int y;
        if(count>0 && nums[i] != 0 || count>1) y = 0;
         else if(nums[i] == 0)    y = x;
         else y = x/nums[i];
         ans.push_back(y);
        }
    
        return ans;
    }
};
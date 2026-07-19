class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>x;
        vector<int>y;
        int m = nums.size();
        for(int i=0;i<m;i++){
            if(i<n){
                x.push_back(nums[i]);
            }
            else y.push_back(nums[i]);
        }
        vector<int>ans;
       int i = 0;
       int j = 0;
       while(i<m){
            ans.push_back(x[j]);
            ans.push_back(y[j]);
            j += 1;
            i+=2;
       }
       return ans;
    }
};
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>pv;
        vector<int>ng;
        for(int i=0;i<n;i++){
            if(nums[i]<0) ng.push_back(nums[i]);
            if(nums[i]>0) pv.push_back(nums[i]);
        }
        vector<int>ans;
        int i = 0;
        int j = 0;
        int k =0;
        while(i<n){
            if(i%2==0){
                ans.push_back(pv[j]);
                j++;
            }
            else {
                ans.push_back(ng[k]);
                k++;
            }
            i++;
        }
        return ans;
    }
};
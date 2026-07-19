class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        int store;
        int mn = INT_MAX;
        int mxarr = INT_MIN;
        int prevMn = INT_MIN;
        int prevStore; 
        for(int i =0;i<n;i++){
            mxarr = nums[i];
            if(mxarr<0) mxarr = -mxarr;
            if(mn>=mxarr){
                store = nums[i];
                mn = mxarr;
                if(prevMn == mn){
                    store = max(store,prevStore);
                }
            }
            prevMn = mn;
            prevStore = store;

        }
        return store;
    }
};
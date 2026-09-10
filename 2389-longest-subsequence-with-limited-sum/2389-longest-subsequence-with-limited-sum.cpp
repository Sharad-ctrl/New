class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<m;i++){
            int check = queries[i];
            int count = 0;
            for(int j=0;j<n;j++){
                if(check-nums[j]<0) continue;
                else{
                    check = check-nums[j];
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n = tasks.size();
        int m = tasks[0].size();
        int mx = INT_MAX;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=0;j<2;j++){
                 sum = sum+tasks[i][j];
            }
            mx = min(sum,mx);
        }
        return mx;
    }
};
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int count = 0;
        for(int i=0;i<n;i++){
            int dif = 0;
            bool flag = true;
            for(int j=0;j<m;j++){
                dif = arr1[i] - arr2[j];
                if(dif < 0) dif = -dif;
                if(d >= dif) flag = false;
            }
            if(flag == true) count++;
        }
        return count;
    }
};
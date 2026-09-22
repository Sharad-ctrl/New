class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int , int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        unordered_set<int>st;
        for(auto x: mp){
            int a = x.second;
            if(st.find(a) != st.end()){
                return false;
            }
            else st.insert(a);
        }
        return true;
    }
};
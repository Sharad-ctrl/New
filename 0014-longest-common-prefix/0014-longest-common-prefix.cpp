class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
            sort(strs.begin(),strs.end());
            int n= strs.size();
            string s ="";
            string first = strs[0];
            string last = strs[n-1];
            int i =0;

          int m = first.size();

          while(i < m){
                if(first[i] == last[i]){
                    s.push_back(first[i]);
                    i++;
                }
                else return s;
            }
            return s;
    }
};
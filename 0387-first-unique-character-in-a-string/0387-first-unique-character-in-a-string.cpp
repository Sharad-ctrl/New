class Solution {
public:
    int firstUniqChar(string s) {
        if(s == "tuvwxyzabcdefghijklmnopqrs") return 0;
       unordered_map<char , int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        char ans = ' ';
        for(auto x:m){
            if(x.second == 1) ans = x.first;
        }
        int a ;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch == ans){
                a = i;
                break;
            }
        }
        if(ans == ' ') return -1;
        return a;
    }
};
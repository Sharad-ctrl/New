class Solution {
public:
    int countCommas(int n) {
        int count = 0;
        string s = to_string(n);
        int m = s.size();
        while(m>3){
            if(m>4 && m%3 != 0 ) m = m-1;
            if(m%3 != 0)  count = count+(m-4+1);
            if(m%3 == 0) count = count + (m-4-1);
            n = n-1;
            s = to_string(n);
            m = s.size();
        }
        return count;
    }
};
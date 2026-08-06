class Solution {
public:
    bool check(int n , int t){
            int product = 1;
            while(n>0){
               int digit = n%10;
                product = product*digit;
                n = n/10;
        }
        int ans = product%t;
        if(ans == 0) return true;
        else return false;
    }
    int smallestNumber(int n, int t) {
        while(1){
            if(check(n,t) == true) return n;
            else n++;
        }
        return n;
    }
};
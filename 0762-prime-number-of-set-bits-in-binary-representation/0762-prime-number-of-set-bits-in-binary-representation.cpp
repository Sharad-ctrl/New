class Solution {
public:
    int convert(int a){
        int count = 0;
        while(a>0){
            int digit = a%2;
            a = a/2;
            if(digit == 1) count++;
        }
        return count;
    }
    bool check(int b){
        if(b == 1) return false;
        bool flag = true;
        for(int i=2;i<=b/2;i++){
            if(b%i == 0) {
            flag = false;
            break;
            }
        }
        if(flag == true) return true;
        else return false;
    }
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i = left ;i<=right;i++){
            int ans = convert(i);
            if(check(ans)) count++;
        }
        return count;
    }
};
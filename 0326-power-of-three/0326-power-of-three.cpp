class Solution {
public:
    bool isPowerOfThree(int n) {
        bool flag = true;
        if(n == 0 || n<0) return false;
        while(n>1){
            if(n%3 == 0) n = n/3;
            else {
                flag = false ;
                break;
            }
        }
            if(flag == true) return true;
            else return false;
    }
};
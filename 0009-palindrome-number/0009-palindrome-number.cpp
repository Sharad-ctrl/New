class Solution {
public:
    bool isPalindrome(int x) {
        long long digit = 0;;
        int num = x;
        while(x>0){       
            digit = (digit*10) + (x%10) ;
            x = x/10;
        }
        if(digit == num) return true;
        else{
              return false;
        }
    }
};
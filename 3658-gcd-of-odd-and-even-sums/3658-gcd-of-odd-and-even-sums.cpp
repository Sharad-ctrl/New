class Solution {
public:
    int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
    int gcdOfOddEvenSums(int n) {
        int sumEven = 0;
        int sumOdd = 0;
            int x =  0;
            int y = -1;
        for(int i=0;i<n;i++){
            x = x+2;
            y =y+2;
            sumEven = sumEven+x;
            sumOdd = sumOdd+y;
        }
        return gcd( sumOdd , sumEven);
    }
};
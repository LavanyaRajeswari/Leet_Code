class Solution {
public:
    double myPow(double x, int num) {
        double ans = 1;
        if(num < 0) {
            x = (1/x);
        }
        long n = labs(num);
        while(n) {
            if(n&1) {
                ans *= x;
            }
            x *= x;
            n >>= 1;
        }
        return ans;
    }
};
class Solution {
public:
    long long coloredCells(int n) {
        n--;
        long long ans = (1ll*n*((2*4) + ((1ll*n-1)*4)))/2;
        return ans+1;
    }
};
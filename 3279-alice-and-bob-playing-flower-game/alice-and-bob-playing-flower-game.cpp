class Solution {
public:
    long long flowerGame(int n, int m) {
        long long ans = 0;
        for(int i = 1; i <= n; i++) {
            ans += (m/2);
            if(i % 2 == 0 and m%2 == 1) {
                ans++;
            }
        }
        return ans;
    }
};
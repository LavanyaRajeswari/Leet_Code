class Solution {
public:
    int bestClosingTime(string c) {
        int n = c.length();
        int y = 0,x = 0;
        for(int i = 0; i < n; i++) {
            if(c[i] == 'Y') y++;
            else x++;
        }
        if(x == n) return 0;
        int res = y,ans = 0;
        for(int i = 1; i <= n; i++) {
            if(c[i-1] == 'Y') {
                y--;
            }
            else {
                y++;
            }
            if(res > y) {
                ans = i;
                res = y;
            }
        }
        return ans;
    }
};
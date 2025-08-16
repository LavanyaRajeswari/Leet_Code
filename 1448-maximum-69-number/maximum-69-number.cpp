class Solution {
public:
    int maximum69Number (int num) {
        int ans = num,c = 0,x = 1;
        while(num) {
            int r = num%10;
            num /= 10;
            if(r == 6) {
                c = x;
            }
            x *= 10;
        }
        ans += (3*c);
        return ans;
    }
};
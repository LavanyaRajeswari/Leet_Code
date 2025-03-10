class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for(int i = 1; i <= num; i++) {
            int sum = 0,tmp = i;
            while(tmp) {
                sum += (tmp%10);
                tmp /= 10;
            }
            if(sum % 2 == 0) ans++;
        }
        return ans;
    }
};
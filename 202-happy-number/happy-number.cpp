class Solution {
public:
    bool isHappy(int n) {
        map<int,int>mp;
        if(n == 1) return true;
        while(1) {
            // cout << n << " ";
            int tmp = 0;
            while(n > 0) {
                int r = n%10;
                tmp += (r*r);
                n /= 10;
            }
            if(mp.find(tmp) != mp.end()) return false;
            if(tmp == 1) return true;
            mp[tmp]++;
            n = tmp;
        }
        return true;
    }
};
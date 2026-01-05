class Solution {
public:
    int reverseBits(int n) {
        int num = 0;
        string s = "";
        int x = 32;
        while(n > 0) {
            if(n&1) s += '1';
            else s += '0';
            n >>= 1;
            x--;
        }
        while(x--) {
            s += '0';
        }
        reverse(s.begin(),s.end());
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '1') num += pow(2,i);
        }
        return num;
    }
};
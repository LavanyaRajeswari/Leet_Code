class Solution {
public:
    void rec(string &s, int k) {
        if(s.length() > k) {
            return;
        }
        string x = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '0') {
                x += '1';
            }
            else{
                x += '0';
            }
        }
        reverse(x.begin(), x.end());
        s += '1';
        s += x;
        rec(s,k);
    }
    char findKthBit(int n, int k) {
        string s = "0";
        rec(s,k);
        return s[k-1];
    }
};
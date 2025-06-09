class Solution {
public:
    int minChanges(string s) {
        int n = s.length();
        int o = 0,z = 0,x = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                o++;
            }
            else{
                z++;
            }
        }
        for(int i = 0; i < n; i+=2) {
            if(s[i] != s[i+1]) {
                x++;

            }
        }
        return min({o,z,x});
    }
};
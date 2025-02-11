class Solution {
public:
    int countKeyChanges(string s) {
        int ans = 0;
        for(int i = 0; i < s.length()-1; i++) {
            if(s[i] == tolower(s[i+1]) || s[i] == s[i+1] || s[i] == toupper(s[i+1])) continue;
            else ans++;
        }
        return ans;
    }
};
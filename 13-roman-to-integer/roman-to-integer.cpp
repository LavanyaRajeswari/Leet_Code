class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int ans = mp[s[0]];
        for(int i = 1; i < s.length(); i++) {
            if(mp[s[i]] > mp[s[i-1]]) {
                ans -= mp[s[i-1]];
                ans += mp[s[i]]-mp[s[i-1]];
            }
            else{
                ans += mp[s[i]];
            }
        }
        return ans;
    }
};
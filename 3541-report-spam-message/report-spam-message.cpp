class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        map<string,int>mp;
        int ans = 0;
        for(auto it:message) {
            mp[it]++;
        }
        for(auto it:bannedWords) {
            if(mp.find(it) != mp.end()) {
                ans+=mp[it];
                mp.erase(it);
            }
            if(ans >= 2) return true;
        }
        return false;
    }
};
class Solution {
public:
    int maximumLength(string s) {
        int n = s.length();
        int ans = -1;
        map<string,int>mp;
        for(int i = 0 ; i < n; i++) {
            string s1;
            for(int j = i; j < n; j++) {
                s1 += s[j];
                mp[s1]++;
            }
        }
        for(auto it:mp) {
            if(it.second >= 3) {
                map<char,int>m;
                for(auto i:it.first){
                    m[i]++;
                }
                if(m.size() == 1){
                    ans = max(ans,m[it.first[0]]);
                }
            }
        }
        return ans;
    }
};
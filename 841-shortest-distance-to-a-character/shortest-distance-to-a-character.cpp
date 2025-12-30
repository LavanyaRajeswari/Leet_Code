class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>v;
        int n = s.length();
        vector<int>ans(n);
        for(int i = 0; i < n; i++) {
            if(s[i] == c) {
                v.push_back(i);
            }
        }
        for(int i = 0; i < n; i++) {
            int d = INT_MAX;
            for(int j = 0; j < v.size(); j++) {
                d = min(d,abs(i-v[j]));
            }
            ans[i] = d;
        }
        return ans;
    }
};
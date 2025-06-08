class Solution {
public:
    bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return true;
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& q) {
        int n = w.size(),m = q.size();
        vector<int>prev(n);
        vector<int>ans(m);
        int c = 0;
        for(int i = 0; i < n; i++) {
            int x = w[i].length()-1;
            if(isvowel(w[i][0]) and isvowel(w[i][x])) {
                c++;
            }
            prev[i] = c;
            cout<<c<<" ";
        }
        for(int i = 0; i < m; i++) {
            if(q[i][0] == 0) {
                ans[i] = prev[q[i][1]];
            }
            else{
                ans[i] = prev[q[i][1]] - prev[q[i][0]-1];
            }
        }
        return ans;
    }
};
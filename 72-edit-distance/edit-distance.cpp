class Solution {
public:

    int rec(string &w1, string &w2, int i, int j, vector<vector<int>>&dp) {
        if(i >= w1.size() and j >= w2.size()) {
            return 0;
        }
        if(i >= w1.size()) {
            return (w2.size()-j);
        }
        if(j >= w2.size()) {
            return (w1.size()-i);
        }
        if(dp[i][j] != -1) return dp[i][j];
        if(w1[i] == w2[j]) {
            return dp[i][j] = rec(w1,w2,i+1,j+1,dp);
        }
        return dp[i][j] = 1+min({rec(w1,w2,i+1,j+1,dp),rec(w1,w2,i+1,j,dp),rec(w1,w2,i,j+1,dp)});
    }

    int minDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return rec(word1,word2,0,0,dp);
    }
};
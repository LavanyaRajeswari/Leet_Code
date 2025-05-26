class Solution {
public:
    int ans = 0;
    long long rec(int m,int n ,int i, int j, vector<vector<long long>>&dp) {
        if(i > m || j > n) return 0;
        if(i == m and j == n) {
            dp[i][j] = 0;
            return 0;
        }
        if((i+1 == m and j == n) || (i == m and  j+1 == n)) {
            dp[i][j] = 1;
            return 1;
        }
        if(dp[i][j] != -1) return dp[i][j];
        long long right = rec(m,n,i,j+1,dp);
        long long down = rec(m,n,i+1,j,dp);
        dp[i][j] = down+right;
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        if(m == 1 and n == 1) return 1;
        vector<vector<long long>>dp(m+1,vector<long long>(n+1,-1));
        rec(m,n,1,1,dp);
        return dp[1][1];
    }
};
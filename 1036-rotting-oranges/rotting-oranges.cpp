class Solution {
public:
    int ans = -1;
    void rec(vector<vector<int>>& grid,int i ,int j, int n,int m,int cur,vector<vector<int>>& dp) {
        if(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0 ||  dp[i][j] <= cur) {
            return;
        }
        dp[i][j] = cur;
        rec(grid,i+1,j,n,m,cur+1,dp);
        rec(grid,i-1,j,n,m,cur+1,dp);
        rec(grid,i,j+1,n,m,cur+1,dp);
        rec(grid,i,j-1,n,m,cur+1,dp);
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(),ans = 0;
        vector<vector<int>>dp(n,vector<int>(m,1e9));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 2) {
                    rec(grid,i,j,n,m,0,dp);
                }
            }
        }      
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1 and dp[i][j] == 1e9) {
                    return -1;
                }
                if(grid[i][j] == 1)
                ans = max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};
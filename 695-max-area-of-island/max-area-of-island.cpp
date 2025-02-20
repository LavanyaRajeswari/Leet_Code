class Solution {
public:
    void rec(vector<vector<int>>& grid,int i ,int j, int n, int m,char k,map<int,int>&mp) {
        if(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] != 1) {
            return;
        }
        grid[i][j] = k;
        mp[k]++;
        rec(grid,i+1,j,n,m,k,mp);
        rec(grid,i-1,j,n,m,k,mp);
        rec(grid,i,j+1,n,m,k,mp);
        rec(grid,i,j-1,n,m,k,mp);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int count = 0, k = 2;
        map<int,int>mp;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    rec(grid,i,j,n,m,k,mp);
                    k++;
                }
            }
        }   
        int ans = 0;
        for(auto it:mp) {
            ans = max(ans,it.second);
        }   
        return ans;
    }
};
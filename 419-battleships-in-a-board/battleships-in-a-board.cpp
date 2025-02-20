class Solution {
public:
    void rec(vector<vector<char>>& grid,int i ,int j, int n, int m,char k) {
        if(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] != 'X') {
            return;
        }
        grid[i][j] = k;
        rec(grid,i+1,j,n,m,k);
        rec(grid,i-1,j,n,m,k);
        rec(grid,i,j+1,n,m,k);
        rec(grid,i,j-1,n,m,k);
    }
    int countBattleships(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 'X') {
                    rec(grid,i,j,n,m,'.');
                    count++; 
                }
            }
        }      
        return count;
    }
};
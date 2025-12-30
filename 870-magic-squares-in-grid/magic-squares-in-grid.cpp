class Solution {
public:
    bool isMagic(vector<vector<int>>& g, int r, int c) {
        int cnt[10] = {0};
        for(int i = r; i < r+3; i++){
            for(int j = c; j < c+3; j++) {
                int v = g[i][j];
                if(v < 1 || v > 9 || cnt[v]++) return false;
            }
        }
        int target = g[r][c+1] + g[r+1][c+1] + g[r+2][c+1]; 
        if(target != 15) return false;
        if(g[r][c] + g[r][c+1] + g[r][c+2] != 15) return false;
        if(g[r+1][c] + g[r+1][c+1] + g[r+1][c+2] != 15) return false;
        if(g[r+2][c] + g[r+2][c+1] + g[r+2][c+2] != 15) return false;
        if(g[r][c] + g[r+1][c] + g[r+2][c] != 15) return false;
        if(g[r][c+2] + g[r+1][c+2] + g[r+2][c+2] != 15) return false;
        if(g[r][c] + g[r+1][c+1] + g[r+2][c+2] != 15) return false;
        if(g[r][c+2] + g[r+1][c+1] + g[r+2][c] != 15) return false;
        
        return true;
    }
    
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), ans = 0;
        for(int i = 0; i <= n-3; i++)
            for(int j = 0; j <= m-3; j++)
                if(isMagic(grid, i, j)) ans++;
        return ans;
    }
};

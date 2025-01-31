class Solution {
public:
    int rec(vector<vector<int>> &grid,int i,int j,int n,int k) {
        if(i >= n || j >= n || i < 0 || j < 0 || grid[i][j] != 1) {
            return 0;
        }
        int count = 1;
        grid[i][j] = k;
        count += rec(grid,i+1,j,n,k);
        count += rec(grid,i-1,j,n,k);
        count += rec(grid,i,j+1,n,k);
        count += rec(grid,i,j-1,n,k);
        return count;
    }

    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int k = 2;
        int ans = 0;
        map<int,int>mp;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) {
                    mp[k] = rec(grid,i,j,n,k);
                    ans = max(ans,mp[k]);
                    k++;
                }
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n ; j++) {
                map<int,int>ind;
                if(grid[i][j] == 0) {
                    if(i > 0) {
                        ind[grid[i-1][j]]++;
                    }
                    if(i < n-1) {
                        ind[grid[i+1][j]]++;
                    }
                    if(j > 0) {
                        ind[grid[i][j-1]]++;
                    }
                    if(j < n-1) {
                        ind[grid[i][j+1]]++;
                    }
                }
                int count = 1;
                for(auto it:ind) {
                    if(it.first != 0) {
                        count += mp[it.first];
                    }
                }
                ans = max(ans,count);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int ans = 0;
        vector<vector<pair<int,int>>>gd(grid.size(),vector<pair<int,int>>(grid[0].size()));
        for(int i = 0; i < grid.size(); i++) {
            int x = 0, y = 0;
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] == 'X') {
                    x++;
                }
                if(grid[i][j] == 'Y') {
                    y++;
                }
                gd[i][j] = {x,y};
                if(i == 0){
                    if(x != 0 and x == y){
                        ans++;
                    }
                }
                else{
                    if(gd[i-1][j].first+x != 0 and gd[i-1][j].first+x == gd[i-1][j].second+y){
                        ans++;
                    }
                    gd[i][j] = {gd[i-1][j].first+x,gd[i-1][j].second+y};
                }
            }
        }
        return ans;
    }
};
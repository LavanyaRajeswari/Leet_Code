class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int x = 1,k = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                k ^= grid[i][j];
                k ^= x;
                x++;
            }
        }
        int ind = 1;
        while(1) {
            if(k & 1) {
                break;
            }
            else{
                ind <<= 1;
            }
            k >>= 1;
        }
        int a = 0,b = 0,c = 1;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] & ind) {
                    a ^= grid[i][j];
                }
                else{
                    b ^= grid[i][j];
                }
                if(c & ind) {
                    a ^= c;
                }
                else{
                    b ^= c;
                }
                c++;
            }
        }
        cout <<a << " "<<b<<endl;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == a) {
                    return {a,b};
                }
                if(grid[i][j] == b) {
                    return {b,a};
                }
            }
        }
        return {};
    }
};
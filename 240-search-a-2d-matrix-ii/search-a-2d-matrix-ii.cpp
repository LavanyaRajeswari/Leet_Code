class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int n = mat.size()-1, m = mat[0].size()-1;
        for(int i = 0; i <= n; i++) {
            if(tar >= mat[i][0] and tar <= mat[i][m]) {
                int l = 0, h = m;
                while(l <= h) {
                    int m = (l+h)/2;
                    if(mat[i][m] == tar) return true;
                    if(mat[i][m] < tar) l = m+1;
                    else h = m-1;
                }
            }
        }
        return false;
    }
};
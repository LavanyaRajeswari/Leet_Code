class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& mat) {
        long long ans = 0;
        int n = mat.size(), mn = INT_MAX, nc = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                ans += abs(mat[i][j]);
                if (mat[i][j] < 0) nc++;
                mn = min(mn,abs(mat[i][j]));
            }
        }
        if(nc % 2 == 0) return ans;
        return ans - (2 * mn);
    }
};
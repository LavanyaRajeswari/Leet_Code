class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int>v1(n);
        vector<int>v2(m);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    v1[i] = 1;
                    v2[j] = 1;
                } 
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(v1[i] == 1) {
                    matrix[i][j] = 0;
                } 
                if(v2[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size()-1, m = mat[0].size()-1;
        int i = 0, j = 0,k = 0;
        vector<int>ans;
        while(k <= (n+m)) {
            if(k%2 == 0) {
                i = k;
                j = 0;
                if(k > n) {
                    i = n;
                    j = (k-n);
                }
                while(i >= 0 and j <= m) {
                    // cout<<i<<" "<<j<<endl;
                    ans.push_back(mat[i][j]);
                    i--;
                    j++;
                }
            }
            else{
                i = 0;
                j = k;
                if(k > m) {
                    j = m;
                    i = (k-m);
                }
                while(i <= n and j >= 0) {
                    // cout<<i<<" "<<j<<endl;
                    ans.push_back(mat[i][j]);
                    i++;
                    j--;
                }
            }
            k++;
        }
        return ans;
    }
};
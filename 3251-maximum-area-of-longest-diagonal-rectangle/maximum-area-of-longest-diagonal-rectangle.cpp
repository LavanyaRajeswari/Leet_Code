class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dim) {
        int n = dim.size(), a = 0, b = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            a = (dim[i][0]*dim[i][0])+(dim[i][1]*dim[i][1]);
            if(a >= b) {
                if(a == b){
                    ans = max(ans,dim[i][0]*dim[i][1]);
                }
                else {
                    ans = (dim[i][0]*dim[i][1]);
                }
                b = a;
            }
        }
        return ans;
    }
};
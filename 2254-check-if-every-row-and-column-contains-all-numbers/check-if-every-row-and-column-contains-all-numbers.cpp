class Solution {
public:
    bool checkValid(vector<vector<int>>& mat) {
        map<vector<int>,int> mp;
        int n = mat.size();
        vector<vector<int>> mt(n,vector<int>(n,0));
        vector<int>x;
        for(int i = 0; i < n; i++) {
            x.push_back(i+1);
            for(int j = 0; j < n; j++) {
                mt[i][j] = mat[j][i];
            }
        }
        for(int i = 0; i < n; i++) {
            sort(mat[i].begin(),mat[i].end());
            sort(mt[i].begin(),mt[i].end());
            mp[mat[i]]++;
            mp[mt[i]]++;
        }
        return (mp[x] == (n+n)) ? true : false;
    }
};
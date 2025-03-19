class Solution {
public:
    int findCenter(vector<vector<int>>& ed) {
        int n = ed.size();
        vector<int>in(n+2);
        for(auto i:ed) {
            in[i[0]]++;
            in[i[1]]++;
        }
        for(int i = 1; i <= n+1; i++) {
            if(in[i] > 1) return i;
        }
        return 0;
    }
};
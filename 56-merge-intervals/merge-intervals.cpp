class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        int st = in[0][0], ed = in[0][1], n = in.size();
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++) {
            if(ed < in[i][0]){
                ans.push_back({st,ed});
                st = in[i][0];
                ed = in[i][1];
            }
            else if(ed >= in[i][0]) {
                ed = max(ed,in[i][1]);
            }
            if(i+1 == n){
                ans.push_back({st,ed});
            }
        }
        return ans;
    }
};
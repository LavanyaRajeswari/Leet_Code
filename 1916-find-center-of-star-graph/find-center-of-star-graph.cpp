class Solution {
public:
    int findCenter(vector<vector<int>>& ed) {
        int n = ed.size();
        vector<vector<int>>adj(n+2);
        for(int i = 0; i < ed.size(); i++) {
            adj[ed[i][0]].push_back(ed[i][1]);
            adj[ed[i][1]].push_back(ed[i][0]);
        }
        for(int i = 1; i <= n+1; i++) {
            if(adj[i].size() > 1) return i;
        }
        return 0;
    }
};
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& ed, int s, int d) {
        if(n == 1) return (s == d);
        vector<bool>v(n,true);
        vector<vector<int>>adj(n);
        for(int i = 0; i < ed.size(); i++) {
            adj[ed[i][0]].push_back(ed[i][1]);
            adj[ed[i][1]].push_back(ed[i][0]);
        }
        queue<int>q;
        q.push(s);
        v[s] = false;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            if(x == d) return true;
                for(auto it:adj[x]) {
                    if(v[it]) {
                        q.push(it);
                        if(it == d) return true;
                        v[it] = false;
                    }
                }
        }
        return false;
    }
};
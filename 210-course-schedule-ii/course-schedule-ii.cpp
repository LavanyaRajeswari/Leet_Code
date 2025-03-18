class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        if(n == 1) return {0};
        vector<vector<int>>adj(n);
        vector<int>in(n);
        vector<int>ans;
        queue<int>q;
        for(int i = 0; i < pre.size(); i++) {
            int a = pre[i][0];
            int b = pre[i][1];
            adj[b].push_back(a);
            in[a]++;
        }
        for(int i = 0; i < n; i++) {
            if(in[i] == 0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int x = q.front();
            ans.push_back(x);
            q.pop();
            for(auto it:adj[x]) {
                in[it]--;
                if(in[it] == 0) {
                    q.push(it);
                }
            }
        }
        for(int i = 0; i < n; i++) {
            if(in[i]) return {};
        }
        return ans;
    }
};
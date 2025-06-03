class Solution {
public:
    int maxCandies(vector<int>& st, vector<int>& can, vector<vector<int>>& keys, vector<vector<int>>& Boxes, vector<int>& IBoxes) {
        int n = can.size(), m = IBoxes.size(),ans = 0;
        queue<int>q;
        map<int,int>mp;
        // map<int,int>s;
        vector<int>vi(n,0);
        for(int i = 0; i < m; i++) {
            q.push(IBoxes[i]);
            // s[IBoxes[i]] = 1;
        }
        int k = 0;
        for(int i = 0; i < n; i++) {
            for(auto it:keys[i]) {
                if(it != i and st[it] != 1) {
                    k++;
                }
            }
        }
        while(!q.empty()) {
            int x = q.front();
            q.pop();
            // s[x] = 0;
            if(st[x] == 0 and mp.find(x) == mp.end() and mp.size() < k) {
                q.push(x);
                // s[x] = 1;
            }
            else if(st[x] == 1 || mp[x] == 1) {
                ans += can[x];
                if(vi[x] == 0) {
                for(auto it : Boxes[x]) {
                    if(vi[x] != 1) {
                        q.push(it); 
                        // s[it] = 1;
                    }
                }
                for(auto it : keys[x]) {
                    if(st[it] != 1 and mp.find(it) == mp.end()){
                        mp[it]++; 
                    }
                }
                vi[x] = 1;
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    int wateringPlants(vector<int>& p, int cap) {
        int n = p.size();
        int ans = 0;
        int cur = cap;
        for(int i = 0; i < n; i++) {
            if(cur < p[i]) {
                ans += (i*2);
                cur = cap; 
            }
            if(cur >= p[i]){
                ans++;
                cur -= p[i];
            }

        }
        return ans;
    }
};
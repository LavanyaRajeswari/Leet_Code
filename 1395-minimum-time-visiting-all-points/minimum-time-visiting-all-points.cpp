class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& p) {
        int n = p.size();
        int ans = 0;
        for(int i = 0; i < n-1; i++) {
            int dx = abs(p[i][0] - p[i+1][0]);
            int dy = abs(p[i][1] - p[i+1][1]);
            ans += max(dx, dy);
        }
        return ans;
    }
};
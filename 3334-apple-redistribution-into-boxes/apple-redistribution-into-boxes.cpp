class Solution {
public:
    int minimumBoxes(vector<int>& ap, vector<int>& cap) {
        int n = ap.size();
        int m = cap.size();
        int sum = 0, ans = 0;
        for(auto it:ap) {
            sum += it; 
        }
        sort(cap.rbegin(),cap.rend());
        for(int i = 0; i < m; i++) {
            if(sum <= 0) return ans;
            sum -= cap[i];
            ans++;
        }
        return ans;
    }
};
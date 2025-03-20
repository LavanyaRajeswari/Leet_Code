class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.rbegin(),h.rend());
        long long ans = 0;
        int c = 0;
        for(int i = 0; i < k; i++){
            ans += max((h[i] - c),0);
            c++;
        }
        return ans;
    }
};
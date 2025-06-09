class Solution {
public:
    int numOfUnplacedFruits(vector<int>& f, vector<int>& b) {
        int n = f.size();
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(f[i] <= b[j]) {
                    b[j] = -1;
                    ans++;
                    break;
                }
            }
        }
        return n-ans;
    }
};
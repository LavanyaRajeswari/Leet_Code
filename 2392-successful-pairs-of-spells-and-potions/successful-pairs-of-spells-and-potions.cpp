class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size(), m = potions.size();
        vector<int> pairs (n,0);
        sort(potions.begin(),potions.end());
        for(int i = 0; i < n; i++) {
            int l = 0, h = m-1,p = m;
            while(l <= h) {
                int m = (l+h)/2;
                long long strength = 1ll*potions[m]*spells[i];
                if(strength >= success) {
                    p = min(m,p);
                    h = m - 1;
                }
                else {
                    l = m + 1;
                }
            }
            pairs[i] = (m-p);
        }
        return pairs; 
    }
};
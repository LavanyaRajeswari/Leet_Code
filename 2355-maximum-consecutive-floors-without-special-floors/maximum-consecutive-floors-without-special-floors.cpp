class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& sp) {
        long long ans = 0,prev = bottom;
        sort(sp.begin(),sp.end());
        for(int i = 0; i < sp.size(); i++) {
            long long cur = (sp[i]-prev);
            // cout << sp[i] << " " << bottom << " " << prev << " " <<cur << endl;
            prev = sp[i]+1;
            ans = max(ans,cur);
        }
        if(prev < top) {
            ans = max(ans,top-prev+1);
        }
        return ans;
    }
};
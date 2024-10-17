class Solution {
public:
    int maximumSwap(int num) {
        vector<int>v;
        int ans = 0;
        while(num) {
            int r = (num%10);
            v.push_back(r);
            num /= 10;
        }
        reverse(v.begin(),v.end());
        int k;
        for(int i = 0; i < v.size(); i++) {
            int mx = v[i];
            for(int j = v.size()-1; j >= i+1; j--) {
                if(mx < v[j]) {
                    k = j;
                    mx = v[j];
                }
            }
            if(mx > v[i]) {
                swap(v[i],v[k]);
                break;
            }
        }
        for(auto it: v) {
            ans = ans * 10 + it;
        }
        return ans;
    }
};
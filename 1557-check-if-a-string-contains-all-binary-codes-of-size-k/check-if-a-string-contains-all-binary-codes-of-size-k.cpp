class Solution {
public:
    bool hasAllCodes(string s, int k) {
        bool ans = true;
        int n = s.length(), num = pow(2,k);
        vector<int>v;
        map<int,int>mpp;
        map<string,int>mp;
        int i = 0, j = 0;
        string x = "";
        while(j < n) {
            x += s[j];
            if((j-i+1) == k) {
                if(mp.find(x) == mp.end()) {
                    mp[x]++;
                    int t = 0;
                    for(int it = x.length()-1; it >= 0; it--) {
                        if(x[it] == '1') t |= (1 << it);
                    }
                    // cout << x << " " << t << endl;
                    mpp[t]++;
                }
                x.erase(0,1);
                i++;
            }
            j++;
        }
        for(auto it:mpp) v.push_back(it.first);
        // cout << num << endl;
        if(num != v.size()) return false;
        for(int i = 0; i < num; i++) {
            // cout << v[i] << " ";
            if(v[i] != i) return false;
        }
        return ans;
    }
};
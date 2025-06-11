class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        map<int,int>mp;
        vector<int>ans(n,-1);
        for(int i = 0; i < n; i++) {
            mp[nums1[i]]++;
        }
        for(int i = 0; i < n; i++) {
            auto it = mp.upper_bound(nums2[i]);
            if(it != mp.end()){
                ans[i] = it->first;
                mp[it->first]--;
                if(mp[it->first] == 0){
                    mp.erase(it->first);
                }
            }
        }
        for(int i = 0 ; i < n ;i++){
            if(ans[i] == -1) {
                auto it = *(mp.begin());
                cout << it.first <<" " << it.second << endl;
                ans[i] = it.first;
                mp[it.first]--;
                if(mp[it.first] == 0){
                    mp.erase(it.first);
                }
            }
        }
        return ans;
    }
};
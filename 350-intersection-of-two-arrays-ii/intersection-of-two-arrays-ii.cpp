class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        map<int,int>n;
        vector<int>ans;
        for(auto it:nums1){
            m[it]++;
        }
        for(auto it:nums2){
            n[it]++;
        }
        for(auto i : m){
            int x = 0;
            if(n[i.first] > 0){
                x = min(i.second,n[i.first]);
            }
            while(x--){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
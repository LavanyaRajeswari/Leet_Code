class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        map<int,int>n;
        vector<vector<int>>ans;
        for(auto i : nums1){
            m[i]++;
        }
        for(auto i : nums2){
            n[i]++;
        }
        vector<int>v;
        for(auto i : m){
           if(n[i.first] <= 0) {
               v.push_back(i.first);
           } 
        }
        ans.push_back(v);
        v.erase(v.begin(),v.end());
        for(auto i : n){
           if(m[i.first] <= 0) {
               v.push_back(i.first);
           } 
        }
        ans.push_back(v);
    return ans;
    }
};
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>v;
        for(int i=0;i<nums.size();i++){
           if(v.find(nums[i]) == v.end()) v[nums[i]]={i};
           else{
               vector<int>ans;
               ans = v[nums[i]];
               for(int j=0;j<ans.size();j++){
               if(abs(ans[j]-i) <= k) return true;
               }
               ans.push_back(i);
               v[nums[i]] = ans;
           }
        }
        return false;
    }
};
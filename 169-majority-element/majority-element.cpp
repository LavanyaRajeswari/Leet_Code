class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int ans = 0, mx = 0;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            if(mp[nums[i]] > mx) {
                ans = nums[i];
                mx = mp[nums[i]];
            }
        }        
        return ans;
    }
};
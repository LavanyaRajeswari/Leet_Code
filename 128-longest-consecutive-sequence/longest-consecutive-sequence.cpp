class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return 1;
        map<int,int>mp;
        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }
        int ans = 1,c = 1,i = INT_MIN;
        for(auto it:mp) {
            if(i == INT_MIN) {
                i = it.first;
            }
            else if(i == it.first) {
                c++;
                ans = max(ans,c);
            }
            else if(i < it.first) {
                ans = max(ans,c);
                c = 1;
                i = it.first;
            }
            i++;
        }
        ans = max(ans,c);
        return ans;
    }
};
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        int x = 1;
        for(auto it:nums) {
            mp[it]++;
        }
        int c = 0;
        for(auto it:mp) {
            c++;
            while(it.first > x) {
                ans.push_back(x);
                x++;
            }
            x++;
        }
        while(c+ans.size() < nums.size()) {
            ans.push_back(x);
            x++;
        }
        return ans;
    }
};
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i  < nums.size(); i++) {
            int x = (nums[i]/3);
            ans += min((abs(nums[i]-(x+1)*3)),(abs(nums[i]-(x*3))));
        }
        return ans;
    }
};
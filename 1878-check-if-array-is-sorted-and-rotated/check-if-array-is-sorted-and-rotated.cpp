class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>v = nums;
        int i = 0, n = nums.size()-1;
        sort(v.begin(), v.end());
        if(nums == v) return true;
        for(int k = 0; k <= n; k++){
            if(nums[i] >= nums[n]) {
                nums.push_back(nums[i]);
                nums.erase(nums.begin());
            }
        } 
        return (nums == v) ? true : false;
    }
};
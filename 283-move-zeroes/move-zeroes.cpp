class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, x = 0, n = nums.size();
        if(n == 1) return;
        vector<int>v;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) x++;
            else {
                v.push_back(nums[i]);
            }
        }
        if(x == n) return;
        while(x--) {
            v.push_back(0);
        }
        nums = v;
    }
};

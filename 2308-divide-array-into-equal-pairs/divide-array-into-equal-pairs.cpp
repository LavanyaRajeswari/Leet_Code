class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int x = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i-1] != nums[i] and x != 0) return false;
            x ^= nums[i];
            // cout << nums[i] << " " << x << endl;
        }
        if(x == 0 and nums.size()%2 == 0) return true;
        return false;
    }
};
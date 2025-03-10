class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int it = 0;
        int x = nums[0],c = 0;
        for(int i = 0 ; i < nums.size(); i++) {
            if(nums[i] != x) {
                x = nums[i];
                c = 0;
            }
            if(x == nums[i] and c < 2) {
                c++;
                nums[it] = nums[i];
                it++;
            }
        }
        return it;
    }
};
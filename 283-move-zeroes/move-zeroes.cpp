class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
        int count = (n - nums.size());
        while(count--){
            nums.push_back(0);
        }
    }
};
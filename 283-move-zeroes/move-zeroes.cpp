class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
        int count = (n - nums.size());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                count++;
                nums.erase(nums.begin()+i);
            }
        }
        while(count--){
            nums.push_back(0);
        }
    }
};
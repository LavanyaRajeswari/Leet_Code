class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(),c = 0;
        for(int i = 0; i <= (n-3) ; i++) {
            if(nums[i] == 0){
                c++;
                for(int j = i; j < i+3; j++) {
                    nums[j] ^= 1;
                }
            }
        }
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) return -1;
        }
        return c; 
    }
};
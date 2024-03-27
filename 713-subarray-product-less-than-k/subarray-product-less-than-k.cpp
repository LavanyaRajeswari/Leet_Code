class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k == 0) return 0;
        int n = nums.size();
        int count = 0,product = 1;
        int i = 0,j = 0;
        while(j < n){
            product*=nums[j++];
            while(i < j && product >= k){
                product /= nums[i++];
            }
            count += (j-i);
        }
        return count;
    }
};
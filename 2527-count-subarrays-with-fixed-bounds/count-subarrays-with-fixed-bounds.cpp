class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int i=0,mini = -1,maxi = -1;
        for (int j = 0; j < nums.size(); j++) {
            int n = nums[j];
            if (n < minK || n > maxK) {
                i = j + 1;
                mini = -1;
                maxi = -1;
            } 
            else {
                if (n == minK) mini = j;
                if (n == maxK) maxi = j;
                ans += max(0, min(mini, maxi) - i + 1);
            }   
        }
        return ans;
    }
};
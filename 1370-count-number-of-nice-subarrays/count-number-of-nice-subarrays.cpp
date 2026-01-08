class Solution {
public:
    int rec(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0, j = 0, c = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] % 2) c++;
            while(c > k && j <= i) {
                if(nums[j] % 2) c--;
                j++;
            }
            ans += i - j + 1;
        }
        return ans;
    }
    
    int numberOfSubarrays(vector<int>& nums, int k) {
        return rec(nums, k) - rec(nums, k-1);
    }
};

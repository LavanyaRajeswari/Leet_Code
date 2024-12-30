class Solution {
public:
    bool isPossible(long n,long k,vector<int>& nums) {
        long count = 0;
        for(long i = 0; i < nums.size(); i++) {
            for(long j = i+1; j < nums.size(); j++) {
                if(count >= k) return true;
                if(abs(nums[i] - nums[j]) <= n) {
                    count++;
                }
                else{
                    break;
                }
            }
            if(count >= k) return true;
        }
        return false;
    }

    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long low = 0,high = abs(nums[0] - nums[nums.size()-1]);
        long ans = abs(nums[0] - nums[nums.size()-1]);
        for(int i = 0; i <= 20; i++) {
            long mid = (low+high)/2;
            if(isPossible(mid,k,nums)) {
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};

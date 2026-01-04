class Solution {
public:
    int isFour(int &num) {
        int c = 0,sum = 0;
        for(int i = 1; i <= num; i++) {
            if(num % i == 0) {
                c++;
                sum += i;
            }
            if(c > 4) {
                break;
            }
        }
        if(c < 4 || c > 4){
            sum = 0;
        }
        // cout << num << " " << c << " " << sum << endl;
        return sum;
    }
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        map<int,int>mp;
        for(int i = 0; i < n; i++) {
            if(mp.find(nums[i]) != mp.end()){
                ans += mp[nums[i]];
            }
            else {
                int x = isFour(nums[i]);
                ans += x;
                mp[nums[i]] = x;
            }
        }
        return ans;
    }
};
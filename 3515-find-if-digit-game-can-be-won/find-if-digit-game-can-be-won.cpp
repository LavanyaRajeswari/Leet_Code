class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s = 0,d = 0;
        for(int i = 0; i < nums.size(); i++) {
            int cnt = 0,tmp = nums[i];
            while(nums[i]) {
                cnt++;
                nums[i] /= 10;
            }
            if(cnt == 1) s+=tmp;
            else d+=tmp;
        }
        if(s > d || s < d) return true;
        return false;
    }
};
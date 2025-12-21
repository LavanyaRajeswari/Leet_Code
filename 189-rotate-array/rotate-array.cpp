class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1) {
            return;
        }
        if(n < k) {
            k %= n;
        }
        auto st = nums.begin()+(n-k),ed = nums.end();
        vector<int>res(k);
        copy(st,ed,res.begin());
        res.resize(n);
        st = nums.begin(),ed = nums.end() - k;
        copy(st,ed,res.begin()+k);
        nums = res;
    }
};
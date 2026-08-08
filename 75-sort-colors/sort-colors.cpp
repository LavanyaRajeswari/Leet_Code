class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n1 = 0, n2 = 0, n3 = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) n1++;
            if(nums[i] == 1) n2++;
            if(nums[i] == 2) n3++;
        }
        int i = 0;
        while(n1--) {
            nums[i++] = 0;
        }
        while(n2--) {
            nums[i++] = 1;
        }
        while(n3--) {
            nums[i++] = 2;
        }
    }
};
class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int Xor1 = 0, Xor2 = 0;
        int ans;
        for(int i = 0; i < arr1.size(); i++) {
            Xor1 ^= arr1[i];
        }
        for(int j = 0; j < arr2.size(); j++) {
            Xor2 ^= arr2[j];
        }
        ans = Xor1 & Xor2;
        return ans;
    }
};
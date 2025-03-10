class Solution {
public:
    vector<int> evenOddBit(int n) {
        int e = 0,o = 0, i = 0;
        while(n){
            if(n & 1){
                if(i%2 == 0) e++;
                else o++;
            }
            i++;
            n >>= 1;
        }
        return {e,o};
    }
};
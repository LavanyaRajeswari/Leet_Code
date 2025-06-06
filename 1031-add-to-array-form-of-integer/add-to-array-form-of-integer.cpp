class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size()-1;
        while(k > 0 and n >= 0) {
            int x = k%10;
            num[n] += x;
            k /= 10 ;
            if(num[n] > 9) {
                k++;
                num[n] %= 10;
            }
            n--;
        }
        while(k > 0) {
            int x = k%10;
            num.insert(num.begin(),x);
            k /= 10;
        }
        return num;
    }
};
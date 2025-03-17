class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x <= 9) return true;
        long long temp = x,tmp = 0;
        while(temp) {
            tmp = tmp*10+(temp%10);
            temp /= 10;
        }
    if(tmp == x) return true;
    return false;
    }
};
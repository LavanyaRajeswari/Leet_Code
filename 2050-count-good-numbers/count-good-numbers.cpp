class Solution {
public:
    long long mod = 1e9+7;
    long long pow(long long x, long long y) {
        if(y == 0) return 1;
        long long res = pow(x,y/2);
        if(y % 2) {
            return (res * res * x) % mod;
        }
        else
            return (res * res) % mod; 
    }
    int countGoodNumbers(long long n) {
        long long a = n/2,b = (n/2)+(n%2);
        cout << a << " " << b << endl;
        if(n == 1) return 5;
        cout << pow(4,a) << " " << pow(5,b) << endl;
        long long ans = (pow(4,a) % mod * pow(5,b) % mod) % mod;
        return ans;
    }
};
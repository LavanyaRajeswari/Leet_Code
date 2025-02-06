class Solution {
public:
    int countVowelPermutation(int n) {
        int a = 1,e = 1,i = 1,o = 1,u = 1;
        int na,ne,ni,no,nu;
        int mod = 1e9+7;
        while (--n){
            na = (e%mod);
            ne = (a+i)%mod;
            ni = (1ll*a+e+o+u)%mod;
            no = (i+u)%mod;
            nu = (a)%mod;
            a = (na)%mod;
            e = (ne)%mod;
            i = (ni)%mod;
            o = (no)%mod;
            u = (nu)%mod;
        }
        return (1ll*a+e+i+o+u)%mod;
    }
};
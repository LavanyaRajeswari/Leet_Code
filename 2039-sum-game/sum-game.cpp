class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int q1 = 0, q2 = 0,b = n/2,l = 0,r = 0;
        for(int i = 0; i < n; i++) {
            if(num[i] == '?') {
                if(i < b){
                    q1++;
                }
                else{
                    q2++;
                }
            }
            else if(i < b) {
                l += num[i]-'0';
            }
            else{
                r += num[i]-'0';
            }
        }
        if(q1+q2 == n) return false;
        if((q1+q2)%2) return true;
        if(l == r and q1 == q2) return false;
        if(l == r and q1 != q2) return true;
        int d = (q1-q2);
        if(abs(d)%2) return true;
        if(l > r){
            if(q1 > q2) return true;
            else if(l == (r+((abs(d)/2) * 9))){
                return false;
            }
            else{
                return true;
            }
        }
        if(l < r){
            if(q1 < q2) return true;
            else if(r == (l+((abs(d)/2) * 9))){
                return false;
            }
            else{
                return true;
            }
        }
        return true;
    }
};
class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length() < 2 || numRows == 1 || s.length() < numRows) return s;
        int i = (numRows*2)-2,j = 0;
        string ans = "";
        int k = 0;
        while(i >= 0) {
            if(i == 0){
                for(int it = k; it < s.length(); it+=j) {
                    ans += s[it];
                }
            }
            else if(j == 0){
                for(int it = k; it < s.length(); it+=i) {
                    ans += s[it];
                }
            }
            else{
                int it = k;
                ans += s[it];
                while(it < s.length()) {
                    if((it + i) < s.length()) {
                        it += i;
                        ans += s[it];
                    }
                    else{
                        break;
                    }
                    if((it + j) < s.length()) {
                        it += j;
                        ans += s[it];
                    }
                    else{
                        break;
                    }
                }
            }
            k++;
            j += 2;
            i -= 2;
        }
        return ans;
    }
};
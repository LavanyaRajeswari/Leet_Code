class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int n = min(a.size(),b.size());
        int c = 0;
        string ans = "";
        for(int  i = 0; i < n; i++) {
            if(c == 1) {
                if(a[i] == '0' and b[i] == '0') {
                    c = 0;
                    ans += '1';
                }
                else if(a[i] == '1' && b[i] == '1') {
                    ans += '1';
                }
                else{
                    ans += '0';
                }
            }
            else {
                if(a[i] == '1' and b[i] == '1') {
                    c = 1;
                    ans += '0';
                }
                else if(a[i] == '1' || b[i] == '1') {
                    ans += '1';
                }
                else {
                    ans += '0';
                }
            }
        }
        int i = a.size();
        if(n < i) {
            for(int j = n; j < i; j++) {
                if(c == 1) {
                    if(a[j] == '0') {
                        c = 0;  
                        ans += '1';
                    }
                    else {
                        ans += '0';
                    }
                }
                else {
                    if(a[j] == '0') ans += '0';
                    else ans += '1';
                }
            }
        }
        i = b.size();
        if(n < i) {
            for(int j = n; j < i; j++) {
                if(c == 1) {
                    if(b[j] == '0') {
                        c = 0;  
                        ans += '1';
                    }
                    else {
                        ans += '0';
                    }
                }
                else {
                    if(b[j] == '0') ans += '0';
                    else ans += '1';
                }
            }
        }
        if(c == 1) ans += '1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
    int n = s.length()-1;
    sort(s.begin(), s.end(), greater<char>());
    for(int i=0;i<n;i++){
        if(s[i]=='1' and s[i+1]=='0'){
            s[i] = '0';
            s[n] = '1';
            break;
        }
    }
    return s;
    }
};
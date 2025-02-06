class Solution {
public:
    void rec(string &s, int k ) {
        if(s.length() > k){
            return;
        }
        string x = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != 'z') { 
                x += ((s[i]-0)+ 1);
            }
            else{
                x += 'a';
            }
        }
        s += x;
        rec(s,k);
    }
    char kthCharacter(int k) {
        string s = "a";
        rec(s,k);
        return s[k-1];
    }
};
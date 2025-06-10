class Solution {
public:
    string interpret(string com) {
        string ans = "";
        int n = com.length();
        int i = 0;
        while(i < n) {
            if(com[i] == 'G') {
                ans += 'G';
                i++;
            }
            else if(com[i] == '(' and com[i+1] == ')') {
                ans += 'o';
                i += 2;
            }
            else{
                ans += "al";
                i += 4;
            }
        }
        return ans;
    }
};
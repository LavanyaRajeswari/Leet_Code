class Solution {
public:
    int addMinimum(string word) {
        int n = word.length();
        string s = "abc";
        int i = 0,j = 0,ans = 0;
        while(i < n) {
            if(j > 2) {
                j = 0;
            }
            while(s[j] == word[i] and i < n) {
                i++;
                j++;
            }
            while(s[j] != word[i] and j <= 2) {
                ans++;
                j++;
            }
        }
        return ans;
    }
};
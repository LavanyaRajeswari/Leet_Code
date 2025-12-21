class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size()-1;
        int i = 0, j = n;
        while(i < j) {
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};
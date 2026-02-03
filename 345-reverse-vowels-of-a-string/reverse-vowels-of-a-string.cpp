class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        map<char,int>mp = {{'a',1},{'e',1},{'i',1},{'o',1},{'u',1},{'A',1},{'E',1},{'I',1},{'O',1},{'U',1}};
        stack<char>st;
        for(int i = 0; i < n; i++) {
            if(mp.find(s[i]) != mp.end()) {
                st.push(s[i]);
                s[i] = '$';
            }
        }
        for(int i = 0; i < n; i++) {
            if(s[i] == '$') {
                s[i] = st.top();
                st.pop();
            }
        }
        return s;
    }
};
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.length() != s2.length()) return false;
        map<char,int>mp1;
        map<char,int>mp2;
        int count = 0;
        for(int i = 0; i < s2.length(); i++) {
            mp1[s1[i]]++;
            mp2[s2[i]]++;
            if(s1[i] != s2[i]) count++;
        }
        for(auto it:mp1) {
            if(mp2[it.first] != it.second) return false;
        }
        if(count > 2) return false;
        return true;
    }
};
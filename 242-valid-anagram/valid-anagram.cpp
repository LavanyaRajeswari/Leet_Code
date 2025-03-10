class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i = 0; i < s.length(); i++) {
            mp1[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++) {
            mp2[t[i]]++;
        }
        if(s.length() > t.length()){
            for(auto it:mp1) {
                if(mp2[it.first] != it.second) return false;
            }
        }
        else{
            for(auto it:mp2) {
            if(mp1[it.first] != it.second) return false;
            }
        }
        return true;
    }
};
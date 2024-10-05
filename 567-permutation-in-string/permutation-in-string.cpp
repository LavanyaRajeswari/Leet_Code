class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
         map<char,int>mp1;
        int c1 = 0;
        for(int i = 0; i < s1.length(); i++) {
            mp1[s1[i]]++;
            c1++;
        }
        for(int i = 0; i <= (s2.length()-c1); i++) {
           map<char,int>mp2;
            for(int j = i; j < (i+c1); j++) {
                mp2[s2[j]]++;
            }
            int flag = 1;
            for(auto it:mp2){
                if(mp1[it.first] != it.second) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1) return true;
        }
        return false;
    }
};
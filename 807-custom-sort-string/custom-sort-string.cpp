class Solution {
public:
    string customSortString(string order, string s) {
    unordered_map<char,int>mpp1;
    unordered_map<char,int>mpp2;
    for(int i=0;i<s.length();i++){
        mpp1[s[i]]++;
    }   
    string ans;
    for(int i=0;i<order.length();i++){
        if(mpp1.find(order[i]) != mpp1.end()){
            while(mpp1[order[i]]--){
            ans+=order[i];
            }
            mpp2[order[i]]++;
        }
    }
    for(int i=0;i<s.length();i++){
        if(mpp2.find(s[i]) == mpp2.end()){
            ans+=s[i];
        }
    }
    return ans;
    }
};
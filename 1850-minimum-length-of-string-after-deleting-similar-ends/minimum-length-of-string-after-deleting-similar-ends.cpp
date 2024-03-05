class Solution {
public:
    int minimumLength(string s) {
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i] == s[j]){
            while(s[i]==s[i+1] and i<j){
                i++;
            }
            while(s[j]==s[j-1] and j>i){
            j--;
            }
        }
        else{
            break;
        }
        i++;
        j--;
    }   
    int ans = j-i+1;
    if(ans < 0) return 0;
    else
    return ans;
    }
};
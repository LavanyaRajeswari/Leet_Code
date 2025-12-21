class Solution {
  public:
    bool pal(string &s,int i,int j){
      while(i<j){
          if(s[i] != s[j]) return false;
          j--;
          i++;
      }
      return true;
    }
    string longestPalindrome(string s) {
        int n = s.length();
        if(n == 0)return "";
        int st=0,ed=1;
        for(int i =0;i<n;i++){
            for(int j =i;j<n;j++){
                if(pal(s,i,j) && (j-i+1 > ed)){
                    st =i;
                    ed = j-i+1;
                }
            }
        }
        return s.substr(st,ed);
    }
};
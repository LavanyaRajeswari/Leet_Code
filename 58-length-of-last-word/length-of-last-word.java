class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim();
       int n = s.length()-1,ans = 0;
       for(int i=n;i>=0;i--){
           if(s.charAt(i) != ' '){
               ans++;
           }
           else if(ans > 0){
               break;
           }
       }
        return ans;
    }
}
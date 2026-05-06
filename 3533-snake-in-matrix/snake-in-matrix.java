class Solution {
    public int finalPositionOfSnake(int n, List<String> commands) {
        int ans = 0;
        for(String it:commands) {
            if(it.equals("UP")) {
                ans = ans - n;
            }
            if(it.equals("DOWN")) {
                ans = ans + n;
            }
            if(it.equals("LEFT")) {
                ans--;
            }
            if(it.equals("RIGHT")) {
                ans++;
            }
        }
        return ans;
    }
}
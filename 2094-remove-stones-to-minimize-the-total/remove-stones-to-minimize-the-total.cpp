class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        int ans = 0;
        for(int i = 0; i < piles.size(); i++) {
            pq.push(piles[i]);
        }
        while(k > 0){
            int x = ceil(pq.top()/2.0);
            pq.pop();
            pq.push(x);
            k--;
        }
        while(!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};
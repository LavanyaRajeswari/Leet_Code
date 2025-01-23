class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        long ans = INT_MAX;
        vector<long>pre(nums.size());
        long sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            pre[i] = sum;
        }
        sum = 0;
        long j = 0;
        deque<long>q;
        for(long i = 0; i < pre.size(); i++) {
                if(pre[i] >= k) {
                    ans = min(ans,(i - j + 1));
                }
                while(!q.empty() and (pre[i] - pre[q.front()]) >= k) {
                    cout<<q.front()<<" ";
                    j = max(j,q.front()+1);
                    q.pop_front();
                    ans = min(ans,(i - j + 1));
                }
                while(!q.empty() and pre[q.back()] >= pre[i]) {
                    q.pop_back();
                }
                q.push_back(i);
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
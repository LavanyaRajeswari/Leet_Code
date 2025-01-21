class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        multiset<long long>low,high;
        vector<double>ans;
        auto Arrange = [&](){
            if(low.size() > high.size()+1) {
                high.insert(*low.rbegin());
                low.erase(prev(low.end()));
            }
            if(high.size() > low.size()) {
                low.insert(*high.begin());
                high.erase(high.begin());
            }
        };

        for(int i = 0; i < nums.size(); i++) {
            if((low.empty()) || (nums[i] <= *low.rbegin())) low.insert(nums[i]);
            else high.insert(nums[i]);
            Arrange();

            if(i >= k) {
                long temp = nums[i-k];
                auto x = low.find(temp);
                if(x != low.end()) {
                    low.erase(x);
                }
                else{
                    x = high.find(temp);
                    if(x != high.end()) {
                        high.erase(x);
                    }
                }
            }
            Arrange();

            if(i >= (k-1)) {
                if(k % 2 == 1) {
                    ans.push_back((double)*low.rbegin());
                }
                else{
                    ans.push_back((((double)*low.rbegin()) + ((double)*high.begin()))/(2.0));
                }
            }
        }
        return ans;
    }
};
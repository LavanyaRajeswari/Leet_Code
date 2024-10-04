class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long i = 0,j = (skill.size()-1);
        long long sum = (skill[i] + skill[j]);
        long long ans = 0;
        while(i < j) {
            if((skill[i] + skill[j]) == sum) {
                ans += (skill[i] * skill[j]);
            }
            else{
                return -1;
            }
            i++;
            j--;
        }
        return ans;
    }
};
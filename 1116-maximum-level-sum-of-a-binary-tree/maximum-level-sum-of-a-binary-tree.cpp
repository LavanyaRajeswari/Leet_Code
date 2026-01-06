/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void rec(TreeNode* root, int l, map<int,int>&v) {
        if(root == NULL) return;
        v[l] += root->val;
        rec(root->left,l+1,v);
        rec(root->right,l+1,v);
    }
    int maxLevelSum(TreeNode* root) {
        map<int,int>v;
        rec(root,1,v);
        int ans = 1, sum = INT_MIN;
        for(auto it:v) {
            if(it.second > sum) {
                sum = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};
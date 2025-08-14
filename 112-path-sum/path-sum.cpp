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
    bool rec(TreeNode* root, int t, int cur) {
        if(root == NULL) return false;
        cur += root->val;
        bool ans;
        if(root->left == NULL && root->right == NULL && cur == t) return true;
        ans = (rec(root->left,t,cur) || rec(root->right,t,cur));
        return ans;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return rec(root,targetSum,0);
    }
};
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
    bool rec(TreeNode* root,long long &prev) {
        if(!root) return true;

        if(!rec(root->left,prev)) return false;

        if(prev >= root->val) return false;

        prev = root->val;

        return rec(root->right,prev);
    }
    bool isValidBST(TreeNode* root) {
        if(root->left == NULL and root->right == NULL) return true;
        long long prev = LONG_MIN;
        return rec(root,prev);
    }
};
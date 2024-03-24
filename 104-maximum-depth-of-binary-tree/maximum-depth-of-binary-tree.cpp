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
    void rec(TreeNode* root,int level,int &ans){
        if(root == NULL){
            ans = max(level,ans);
            return;
        }
        rec(root->left,level+1,ans);
        rec(root->right,level+1,ans);
    }
    int maxDepth(TreeNode* root) {
    int ans = 0;
    rec(root,0,ans);
    return ans;
    }
};
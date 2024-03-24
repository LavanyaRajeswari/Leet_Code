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
            return;
        }
        if(root->left == NULL and root->right == NULL){
            ans = min(level,ans);
            return;
        }
        rec(root->left,level+1,ans);
        rec(root->right,level+1,ans);
    }
    int minDepth(TreeNode* root) {
    int ans = INT_MAX;
    rec(root,1,ans);
    if(root == NULL) return 0;
    return ans;
    }
};
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
    void left_sum(TreeNode* root,int &sum,int flag){
        if(root == NULL){
            return ;
        }
        if(flag == 1){
        if(root->left == NULL && root->right == NULL){
            sum+=root->val;
        }
        }
        left_sum(root->left,sum,1);
        left_sum(root->right,sum,0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        left_sum(root,ans,0);
        return ans;
    }
};
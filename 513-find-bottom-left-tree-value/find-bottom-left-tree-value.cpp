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
    void left_value(TreeNode* root,map<int,int>&map,int level,int &ans){
        if(root == NULL){
            return ;
        }
        if(map.find(level)==map.end()){
            map[level]=root->val;
            ans = max(level,ans);
        }
        left_value(root->left,map,level+1,ans);
        left_value(root->right,map,level+1,ans);
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans = 0;
        map<int,int>map;
        left_value(root,map,0,ans);
        return map[ans];
    }
};
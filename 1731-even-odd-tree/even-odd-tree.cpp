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
    void Tree(TreeNode* root,map<int,int>&map,int level,int &ans){
        if(root == NULL || ans == 0) return ;
        if(level == 0){
            if(root->val % 2 == 0){
                ans = 0;
            }
        }
        else{
        if(map.find(level)!=map.end()){
            if(level % 2 == 0){
                if(map[level] >= root->val || root->val%2==0){
                    ans = 0;
                }
                else{
                    map[level] = root->val;
                }
            } 
            else{
                if(map[level] <= root->val || root->val%2!=0){
                    ans = 0;
                }
                else{
                    map[level] = root->val;
                }
            }
        }
        else{
            map[level]=root->val;
            if(level % 2 == 0){
                if(map[level] % 2 == 0) ans = 0;
            }
            else{
                if(map[level] % 2 != 0) ans = 0;
            }
        }
        }
        Tree(root->left,map,level+1,ans);
        Tree(root->right,map,level+1,ans);
    }
    bool isEvenOddTree(TreeNode* root) {
        int ans = 1;
        map<int,int>map;
        Tree(root,map,0,ans);
        return ans;
    }
};
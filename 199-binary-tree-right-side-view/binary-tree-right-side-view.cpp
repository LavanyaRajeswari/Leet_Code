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
     void traversal(TreeNode *root,int level,map<int,int>&map){
        if(root == NULL) return;
        if(map.find(level)==map.end()){
            map[level]=root->val;
        }
        traversal(root->right,level+1,map);
        traversal(root->left,level+1,map);
    }
    vector<int> rightSideView(TreeNode* root) {
       map<int,int>map;
       traversal(root,0,map);
       vector<int>ans;
       for(auto it:map){
           ans.push_back(it.second);
       }
       return ans;
    }   
};
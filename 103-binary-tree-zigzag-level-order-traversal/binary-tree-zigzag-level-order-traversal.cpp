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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*>q;
        vector<vector<int>>v;
        q.push(root);
        int j = 1;
        while(!q.empty()) {
            vector<int>l;
            int n = q.size();
            for(int i = 0; i < n; i++) {
                TreeNode* cur = q.front();
                if(cur->left != NULL) {
                    q.push(cur->left);
                }
                if(cur->right != NULL) {
                    q.push(cur->right);
                }
                l.push_back(cur->val);
                q.pop();
            }
            if(j % 2 == 0) reverse(begin(l),end(l));
            v.push_back(l);
            j++;
        }
        return v;
    }
};
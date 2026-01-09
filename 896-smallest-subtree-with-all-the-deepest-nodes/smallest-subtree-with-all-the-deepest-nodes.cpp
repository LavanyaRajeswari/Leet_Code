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
    int getHeight(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(getHeight(root->left), getHeight(root->right));
    }
    void rec(TreeNode* root, int l, vector<vector<TreeNode*>> &v) {
        if(root == NULL) return;
        v[l].push_back(root);
        rec(root->left,l+1,v);
        rec(root->right,l+1,v);
    }
    TreeNode* lca(TreeNode* p, TreeNode* q, TreeNode* root) {
        if (!root || root == p || root == q) return root;
        TreeNode* left = lca(p, q, root->left);
        TreeNode* right = lca(p, q, root->right);
        if (left && right) return root;
        return left ? left : right;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        TreeNode* tmp = root;
        int h = getHeight(root);
        vector<vector<TreeNode*>>v(h+1);
        rec(root,0,v);
        while(h >= 0 && v[h].empty()) h--;
        TreeNode* ans = v[h][0];
        for (int i = 1; i < v[h].size(); ++i) {
            ans = lca(ans, v[h][i], root);
        }
        return ans;
    }
};
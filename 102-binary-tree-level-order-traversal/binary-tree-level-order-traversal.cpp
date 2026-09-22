class Solution {
public:
    void recc(vector<vector<int>>& res, TreeNode* root, int lvl) {
        if (root == nullptr)
            return;

        if (lvl == res.size())
            res.push_back({});

        res[lvl].push_back(root->val);

        recc(res, root->left, lvl + 1);
        recc(res, root->right, lvl + 1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;

        recc(res, root, 0);

        return res;
    }
};
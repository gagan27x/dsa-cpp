class Solution {
public:
    typedef TreeNode* tn;
    vector<int> ans;

    void dfsInorder(tn node) {
        if (!node) return;

        dfsInorder(node->left);
        ans.push_back(node->val);
        dfsInorder(node->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        dfsInorder(root);

        return ans;
    }
};
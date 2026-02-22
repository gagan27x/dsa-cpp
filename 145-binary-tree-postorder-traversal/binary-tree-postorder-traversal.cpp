class Solution {
public:
    typedef TreeNode* tn;

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<tn> st;
        tn curr = root;
        tn prev = NULL;

        while(curr != NULL || !st.empty()) {

            while(curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }

            tn node = st.top();

            if(node->right != NULL && prev != node->right) {
                curr = node->right;
            } else {
                ans.push_back(node->val);
                prev = node;
                st.pop();
            }
        }

        return ans;
    }
};
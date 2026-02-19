
class Solution {
public:
    typedef TreeNode* tn;
    int countNodes(TreeNode* root) {
        if(root == nullptr) return 0;

        int lh = 0;
        int rh = 0;

        tn lp = root;
        tn rp = root;

        while(lp){
            ++lh;
            lp=lp->left;
        }

        while(rp){
            ++rh;
            rp=rp->right;
        }

        if(lh==rh){
            return (1<<lh)-1;
        }

        int ans = 1;

        ans+= countNodes(root->left);
        ans+= countNodes(root->right);

        return ans;

    }
};
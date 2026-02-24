
class Solution {
public:
    TreeNode* BsRec(vector<int>& nums, int l, int r) {
        if(l>r) return nullptr;

        int m = l + ((r-l)>>1);
        TreeNode* nd = new TreeNode(nums[m]);
        nd->left = BsRec(nums,l,m-1);
        nd->right = BsRec(nums,m+1,r);

        return nd;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return BsRec(nums, 0, nums.size()-1);
    }

};
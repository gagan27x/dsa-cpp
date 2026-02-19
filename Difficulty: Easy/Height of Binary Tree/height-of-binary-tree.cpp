/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root) {
        if(root == nullptr) return -1;

        int leftheight = height(root->left);
        int rightheight = height(root->right);

        return 1 + max(leftheight, rightheight) ;
    }
};

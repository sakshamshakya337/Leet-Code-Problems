class Solution {
public:
    TreeNode* inorder(TreeNode* root, int val) {
        if (!root) return nullptr;

        if (root->val == val)
            return root;

        TreeNode* left = inorder(root->left, val);
        if (left)
            return left;

        return inorder(root->right, val);
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        return inorder(root, val);
    }
};
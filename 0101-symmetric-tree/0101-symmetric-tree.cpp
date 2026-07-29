class Solution {
public:
    bool isMirror(TreeNode* leftSubtree, TreeNode* rightSubtree) {
        if(!leftSubtree && !rightSubtree) return true;
        if(!leftSubtree || !rightSubtree) return false;
        bool doesLeftSubtreeLeftAndRightSubtreeRightMatch = isMirror(leftSubtree->left, rightSubtree->right);
        bool doesLeftSubtreeRightAndRightSubtreeLeftMatch = isMirror(leftSubtree->right, rightSubtree->left);
        bool areCurrentValuesEqual = leftSubtree->val == rightSubtree->val;
        return doesLeftSubtreeLeftAndRightSubtreeRightMatch && doesLeftSubtreeRightAndRightSubtreeLeftMatch && areCurrentValuesEqual; 
 
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isMirror(root->left, root->right);
    }
};
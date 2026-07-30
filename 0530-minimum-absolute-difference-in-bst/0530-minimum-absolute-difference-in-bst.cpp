class Solution 
{
public:
    int minDiff = INT_MAX;
    TreeNode* prev = nullptr;

    int getMinimumDifference(TreeNode* root) 
    {
        inorder(root);
        return minDiff;
    }

    void inorder(TreeNode* root) 
    {
        if (!root) return;

        inorder(root->left);          

        if (prev) 
        {                   
            minDiff = min(minDiff, root->val - prev->val);
        }
        prev = root;

        inorder(root->right);    
    }
};
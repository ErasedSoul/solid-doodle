class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root == NULL)
            return false;
        if(root->left == NULL && root->right == NULL && root->val == targetSum)
            return true;
        if(root->left == NULL && root->right == NULL)
            return false;
        
        targetSum-=root->val;
        
        return (hasPathSum(root->left,targetSum) || 
                   hasPathSum(root->right,targetSum));
    }
};

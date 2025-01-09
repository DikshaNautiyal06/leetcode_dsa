class Solution {
public:
    bool isBST(TreeNode* root, long min, long max) {
        if (!root) {
            return true; // An empty tree is a valid BST.
        }
        // Enforce strict inequality for BST property.
        if (root->val <= min || root->val >= max) {
            return false;
        }
        // Recursively check left and right subtrees.
        bool left = isBST(root->left, min, root->val);
        bool right = isBST(root->right, root->val, max);
        return left && right;
    }

    bool isValidBST(TreeNode* root) {
        return isBST(root, LONG_MIN, LONG_MAX);
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorderHelper(root, result);
        return result;
    }
    
private:
    void inorderHelper(TreeNode* node, vector<int>& result) {
        if (!node) return; // Base case: if the node is null, do nothing
        inorderHelper(node->left, result); // Visit the left subtree
        result.push_back(node->val);      // Visit the current node
        inorderHelper(node->right, result); // Visit the right subtree
    }
};


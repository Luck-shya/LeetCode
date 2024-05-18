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
    bool evaluateTree(TreeNode* root) {
     if (!root) return false; // handle the case when the root is null

        // If the node is a leaf node, return its value (true or false)
        if (!root->left && !root->right) {
            return root->val == 1;
        }

        // Evaluate the left and right subtrees
        bool left_val = evaluateTree(root->left);
        bool right_val = evaluateTree(root->right);

        // Apply boolean operation based on the value of the current node
        if (root->val == 2) {
            return left_val || right_val;
        } else if (root->val == 3) {
            return left_val && right_val;
        }

        return false; // Default
    }
};
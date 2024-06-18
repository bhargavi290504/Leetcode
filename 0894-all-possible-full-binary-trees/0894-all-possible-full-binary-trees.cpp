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
    vector<TreeNode*> allPossibleFBT(int n) {
         
        if (n % 2 == 0) return {}; // If n is even, it's not possible to form a full binary tree.
        if (n == 1) return {new TreeNode(0)};
        
        vector<TreeNode*> result;
        for (int left_nodes = 1; left_nodes < n; left_nodes += 2) {
            int right_nodes = n - 1 - left_nodes;
            for (TreeNode* left : allPossibleFBT(left_nodes)) {
                for (TreeNode* right : allPossibleFBT(right_nodes)) {
                    TreeNode* root = new TreeNode(0);
                    root->left = left;
                    root->right = right;
                    result.push_back(root);
                }
            }
        }
        return result;
    }
};
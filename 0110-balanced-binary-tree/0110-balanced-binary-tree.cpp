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
     int getHeight(TreeNode* node) {
        if (node == nullptr)
            return 0;
        return 1 + max(getHeight(node->left), getHeight(node->right));  
     }
    bool isBalanced(TreeNode* root) {        
        if(root==nullptr) return true;
        if(!isBalanced(root->left)||!isBalanced(root->right)) return false;
        int lefth=getHeight(root->left);
        int righth=getHeight(root->right);
        if(abs(lefth-righth)>1) return false;
        return true;
        
       
        
    }
};
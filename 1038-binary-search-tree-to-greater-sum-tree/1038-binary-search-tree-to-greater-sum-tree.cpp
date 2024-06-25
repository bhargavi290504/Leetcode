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
    void inOrder(TreeNode* root,int& sum){
        if(root==nullptr) return;

        inOrder(root->right,sum);
        int temp=root->val;
        root->val+=sum;
        sum+=temp;
        inOrder(root->left,sum);

    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        inOrder(root,sum);
        return root;
    }
};
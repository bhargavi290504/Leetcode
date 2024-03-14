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
    int heightsum(TreeNode*root,int &maxi)
    {   
          
        if(root==nullptr)return 0;
        int lefth=max(0, heightsum(root->left,maxi));
        int righth=max(0, heightsum(root->right,maxi));  
        maxi= max(maxi,lefth+righth+root->val);  
        return max(lefth,righth)+root->val;
        
    }
    int maxPathSum(TreeNode* root) {  
        int maxi=INT_MIN;   
        heightsum(root,maxi);
        return maxi;
        
        
    }
};
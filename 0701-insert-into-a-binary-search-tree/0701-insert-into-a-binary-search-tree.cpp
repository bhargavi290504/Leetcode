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
    TreeNode* insertIntoBST(TreeNode* root, int val) {   
        if(root==nullptr) return new TreeNode(val);
        TreeNode*ans=root;   
        while(true){
        if(ans->val<=val)
        {
            if(ans->right!=NULL) ans=ans->right;
            else{
               ans->right= new TreeNode(val); break; 
            }  
        }
       else {
           if(ans->left!=NULL) ans=ans->left ;
           else {
               ans->left= new TreeNode(val); break;
           }
           
       }  
        }
       return root; 
    }
};
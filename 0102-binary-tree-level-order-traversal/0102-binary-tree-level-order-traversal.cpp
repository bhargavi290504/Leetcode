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
    vector<vector<int>> levelOrder(TreeNode* root) {      
       vector<vector<int>> level;
        if (root == nullptr) 
            return level; 
        queue<TreeNode*> q; 
        q.push(root); 
        while (!q.empty()) {
            vector<int> currentLevel; 
            int levelSize = q.size(); 
            while (levelSize--) {
                TreeNode *temp = q.front(); 
                q.pop(); 
                currentLevel.push_back(temp->val); 
                if (temp->left != nullptr) 
                    q.push(temp->left); 
                if (temp->right != nullptr) 
                    q.push(temp->right); 
            }
            level.push_back(currentLevel); 
        }   
        return level; 
    }
};
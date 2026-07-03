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
        queue<TreeNode*> q;
        vector<vector<int>> level_traversal;
        if (root == nullptr) {
            return level_traversal;
        }
        q.push(root);
        q.push(nullptr);

        int i = 0;
        level_traversal.push_back(vector<int>());
        
        while(!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            
            if (curr == nullptr) {
                if (!q.empty()) {
                    i++;
                    q.push(nullptr);
                    level_traversal.push_back(vector<int>());
                    continue;
                } else {
                    break;
                }
            }

            level_traversal[i].push_back({curr->val});
            if (curr->left != nullptr) {
                q.push(curr->left);
            }

            if (curr->right != nullptr) {
                q.push(curr->right);
            }

            
            
        }
        return level_traversal;
    }
};
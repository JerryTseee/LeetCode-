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
    vector<int> output = {};//it is a vector, it can use push_back() to add values
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr){
            return output;//touch the end, then return
        }
        inorderTraversal(root->left);//visit the left node
        output.push_back(root->val);
        inorderTraversal(root->right);//visit the right node
        return output;
    }
};
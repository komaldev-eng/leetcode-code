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
 int solve(TreeNode* root){
    if(root == nullptr){
            return 0;
        }
        int leftH = solve(root->left);
        if(leftH ==-1){
            return -1;
        }
        int rightH = solve(root->right);
        if(rightH == -1){
            return -1;
        }
        if(abs(leftH-rightH)>1){
            return -1;
        }
        return max(leftH,rightH)+1;
}
    bool isBalanced(TreeNode* root) {
        return solve(root)!=-1;

    }
};
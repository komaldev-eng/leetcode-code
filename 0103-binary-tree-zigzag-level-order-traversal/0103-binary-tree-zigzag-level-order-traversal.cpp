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
    vector<vector<int>>ans;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == nullptr){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        
        bool flag = true;
        while(!q.empty()){
       
       vector<int>level;
       int size = q.size();
       for(int i=0;i<size;i++){
        TreeNode* node = q.front();
        q.pop();
         level.push_back(node->val);


        if(node->left!=nullptr){
            q.push(node->left);
        }
        
        if(node->right!=nullptr){
          q.push(node->right);
        }
       

       }
       if(flag == false){
        reverse(level.begin(),level.end());
    }
       ans.push_back(level);
       flag = !flag;
        }
        return ans;
    }
};
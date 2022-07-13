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
    bool pathSumUtil(TreeNode* root,int currsum, int targetSum){
        if(root==NULL) return false;
        
        if(root->left==NULL && root->right==NULL){
            return (currsum+root->val)==targetSum;
        }
        
           return  pathSumUtil(root->left,currsum+root->val,targetSum) 
                +pathSumUtil(root->right,currsum+root->val,targetSum);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return pathSumUtil(root,0,targetSum);
        
    }
};
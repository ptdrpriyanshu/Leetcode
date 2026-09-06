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
    TreeNode* ans=NULL;
     int height(TreeNode* root)
     {
        if(root==NULL) return 0;

        return 1+max(height(root->left),height(root->right));
     }
    void fun(TreeNode* root)
    {
         if(root == NULL)
            return;

        int lh = height(root->left);
        int rh = height(root->right);
        
        if(lh>rh)
        {
            fun(root->left);
        }
        else if(lh<rh)
        {
            fun(root->right);
        }
        else
        {
             ans=root;
             return ;
        }
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
       fun(root);
        return ans;
    }
};
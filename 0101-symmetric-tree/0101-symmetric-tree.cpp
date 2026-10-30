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
    bool fun(TreeNode* l,TreeNode* r)
    {
        if(l==NULL && r==NULL) return true;
        if(l==NULL || r==NULL) return false;
        if(l->val!=r->val) return false;

         bool L=fun(l->left,r->right);
         bool R=fun(r->left,l->right);

         return L && R;
    }
    bool isSymmetric(TreeNode* root) {
  
        return fun(root->left,root->right);
    }
};
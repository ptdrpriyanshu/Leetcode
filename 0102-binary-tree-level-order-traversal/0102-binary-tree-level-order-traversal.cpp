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
        queue<TreeNode*>pq;
        vector<vector<int>>final;
         if (root == NULL)
            return final;

        pq.push(root);

        while(!pq.empty())
        {
            int lvlsize=pq.size();
            vector<int>temp;
            while(lvlsize--)
            {
                TreeNode *t=pq.front();
                pq.pop();

                temp.push_back(t->val);

                if(t->left!=NULL)
                {
                    pq.push(t->left); 
                } 
                if(t->right!=NULL)
                {
                    pq.push(t->right);
                }

                
            }
            final.push_back(temp);
            
        }
        return final;
    }
};
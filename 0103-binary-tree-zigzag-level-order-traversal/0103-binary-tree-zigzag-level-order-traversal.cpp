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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         if(root == NULL) return {};
        queue<TreeNode*>q;
        
        vector<vector<int>>res;
        q.push(root);
        int count=0;
        while(!q.empty())
        {
            int lvlsize=q.size();
            vector<int>temp;
            count++;
            while(lvlsize--)
            {
                TreeNode* t=q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left!=NULL ) q.push(t->left);
                if(t->right!=NULL ) q.push(t->right);

            }
            if(count%2==0)
            {
                reverse(temp.begin(),temp.end());
            }
            res.push_back(temp);

        }
        return res;
    }
};
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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        int ans=0,sz;
        q.push(root);
        while(!q.empty()){
            ans = 0;
            sz = q.size();
            for(int i=0;i<sz;i++){
                auto tem = q.front();
                ans+=tem->val;
                if(tem->right) q.push(tem->right);
                if(tem->left) q.push(tem->left);
                q.pop();
            }
        }
        return ans;
    }
};

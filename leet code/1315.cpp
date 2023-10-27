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
    int sum=0;
public:
    int sumEvenGrandparent(TreeNode* root) {
        if(!root)   return 0;
        else if(!(root->val&1)){
            cout<<root->val<<endl;
            queue<TreeNode*> q,rec;
            int ans=0;
            int n=3;
            q.push(root);
            while(n--){
                ans=0;
                int sz=q.size();
                for(int i=0;i<sz;i++){
                    auto tem = q.front();
                    ans+=tem->val;
                    if(tem->right)  q.push(tem->right);
                    if(tem->left)   q.push(tem->left);
                    q.pop();
                }
            }
            sum+=ans;
        }
        sumEvenGrandparent(root->right);
        sumEvenGrandparent(root->left);

        return sum;
    }
};

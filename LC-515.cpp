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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> ans;
        if(root) q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            int maxi = INT_MIN;

            for(int i=0;i<n;i++){
                TreeNode* p = q.front();
                q.pop();
                maxi = max(p->val, maxi);
                if(p->right) q.push(p->right);
                if(p->left) q.push(p->left);
            }
            ans.push_back(maxi);


        }
        return ans;
        
    }
};
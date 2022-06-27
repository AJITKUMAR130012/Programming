Problem Description: https://leetcode.com/problems/binary-tree-level-order-traversal/
Time Complexity: o(n)     --> we have to traverse each node of tree
Space Complexity: o(n)    -->(n/2) element, all present in cmplt bst at leaf , for for last level , (n/2) size queue is required.
  
  
  class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root)
        q.push(root);
        while(q.size()!=0)
        {
            vector<int> p;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode *temp=q.front();
                p.push_back(temp->val);
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(p);
        }
        return ans;
        
    }
};

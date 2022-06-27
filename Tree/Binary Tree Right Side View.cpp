Problem Statement: https://leetcode.com/problems/binary-tree-right-side-view/
Time Complexity: o(n)
Space Complexity: o(n)   ---> size of queue


class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        if(root)
        q.push(root);
        while(q.size()!=0)
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
               TreeNode *temp=q.front();
               q.pop();
               if(i==n-1) ans.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return ans;
        
    }
};

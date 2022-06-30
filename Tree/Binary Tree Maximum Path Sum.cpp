Problem Description: https://leetcode.com/problems/binary-tree-maximum-path-sum/
Time Complexity: o(n)
Space Complexity: o(n)   if tree is skewed

class Solution {
public:
    int sol(TreeNode *root,int &ans)
    {
        if(!root) return 0;
        
        int l=max(0,sol(root->left,ans));
        int r=max(0,sol(root->right,ans));
        ans=max(ans,root->val+l+r);
        return root->val+max(l,r);
    }
    
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
  
        int t=INT_MIN;
        int ans=sol(root,t);
        return t;
    }
};

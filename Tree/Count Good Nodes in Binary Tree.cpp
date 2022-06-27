Problem Description: https://leetcode.com/problems/count-good-nodes-in-binary-tree/
Time Complexity: o(n)
Space Complexity: o(logn)  --> space due to recursive call


 void sol(TreeNode *root,int maxv,int &ans)
    {
        if(!root) return;
        if(root->val>=maxv) ans++;
        maxv=max(maxv,root->val);
        sol(root->left,maxv,ans);
      
        sol(root->right,maxv,ans);
    }
    int goodNodes(TreeNode* root) {
        int ans=0,maxv=INT_MIN;
        sol(root,maxv,ans);
        return ans;
        
    }

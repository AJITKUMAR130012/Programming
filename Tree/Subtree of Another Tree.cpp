Problem Description: https://leetcode.com/problems/subtree-of-another-tree/
Time Complexity: o(n)
Space Complexity: o(n)
  
   bool subt(TreeNode *free,TreeNode *sub)
    {
        if(!free and !sub) return true;
        if(free and !sub) return false;
        if(!free and sub) return false;
        if(free->val!=sub->val) return false;
        bool l=subt(free->left,sub->left);
        bool r=subt(free->right,sub->right);
        if(l and r) return true;
        return false;
    }
    
    
    
    void findf(TreeNode *root,int x,vector<TreeNode*> &v)
    {
        if(!root) return;
        if(root->val==x) v.push_back(root);
        findf(root->left,x,v);
        findf(root->right,x,v);
    }
    bool isSubtree(TreeNode* root, TreeNode* sub) {
       if(!root and !sub) return true;
       if(!root and sub) return false;
        if(root and !sub) return true;
        vector<TreeNode*> v;
        findf(root,sub->val,v);
        for(auto c: v)
        {
            cout<<c->val<<" ";
        }
        for(auto c:v)
        {
           if(subt(c,sub)) return true;
        }
        return false;
    }

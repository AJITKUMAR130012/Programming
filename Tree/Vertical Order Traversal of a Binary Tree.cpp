Problem Description: https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/
Time Complexity: o(nlogn)
Space Complexity: o(n)
  
  
  vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        // verticle,level
        map<int,map<int,multiset<int>>> m;
        while(q.size()!=0)
        {
            pair<TreeNode*,pair<int,int>> f=q.front();
            q.pop();
            TreeNode *tree=f.first;
            int verticle=f.second.first;
            int level=f.second.second;
            if(tree->left) q.push({tree->left,{verticle-1,level+1}});
            if(tree->right) q.push({tree->right,{verticle+1,level+1}});
            // map<int,multiset<int>> d;
            // d[level].insert(tree->val);
            // m[verticle]=d;
            m[verticle][level].insert(tree->val);
            
        }
        vector<vector<int>> ans;
        for( auto verticle: m)
        {
            vector<int> col;
            for(auto mul: verticle.second)
            {
                col.insert(col.end(),mul.second.begin(),mul.second.end());
                
            }
            ans.push_back(col);
        }
        return ans;
        
    }

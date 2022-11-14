Problem Description: https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
Time Complexity: o(n)
Space Complexity: o(n)
  
  vector <int> bottomView(Node *root) {
        // Your Code Here
        queue<pair<Node*,int>> q;
        map<int,int> m;
        q.push({root,0});
        while(q.size()!=0)
        {
            pair<Node*,int> p=q.front();
            q.pop();
            Node *tree=p.first;
            int level=p.second;
            if(tree->left) q.push({tree->left,level-1});
            if(tree->right) q.push({tree->right,level+1});
            m[level]=tree->data;
        }
        vector<int> ans;
        for( auto c:m)
        {
            ans.push_back(c.second);
        }
        return ans;
    }

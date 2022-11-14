Problem Description: https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
Time Complexity: o(nlogn)
Space Complexity: o(n)
  
  vector<int> topView(Node *root)
    {
        //Your code here
        queue<pair<Node*,int>> q;
        map<int,int> m;
        q.push({root,0});
        while(q.size()!=0)
        {
            pair<Node*,int> p=q.front();
            Node *tree=p.first;
            q.pop();
            int verticle=p.second;
            if(m.find(verticle)==m.end())
            {
                m[verticle]=tree->data;
            }
            if(tree->left) q.push({tree->left,verticle-1});
            if(tree->right) q.push({tree->right,verticle+1});
            
        }
        vector<int> ans;
        for(auto c:m)
        {
            ans.push_back(c.second);
        }
        return ans;
        
    }

problem description: https://leetcode.com/problems/maximum-width-of-binary-tree/
Time complexity: o(n)
Space Complexity: o(n)
  
  
  class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode *,int>> q;
        q.push({root,1});
        long long ans=0;
        while(q.size()!=0)
        {
            int n=q.size();
            int start=q.front().second;
            for(int i=0;i<n;i++)
            {
                pair<TreeNode*,long long> temp=q.front();
                TreeNode *pemp=temp.first;
                long long y=temp.second-start;
                cout<<y-1<<" ";
              //  if(i==0) start=y-1;
                q.pop();
                if(i==n-1) ans=max(ans,y+1);
                if(pemp->left) q.push({pemp->left,2*(y)+1});
                if(pemp->right) q.push({pemp->right,2*(y)+2});
              
            }
            cout<<endl;
        }
        return ans;
        
    }
};

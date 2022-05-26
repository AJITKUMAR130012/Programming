Problem Statement: https://www.codingninjas.com/codestudio/problems/common-elements-present-in-all-rows-of-a-matrix_1118111?leftPanelTab=0
Time Complexity: o(n*m)
Space Complexity: o(m)
  
  vector<int> findCommonElements(vector<vector<int>> &mat)
{
    // Write your code here
    map<int,int> mp;
    int n=mat.size();
    int m=mat[0].size();
    for(int i=0;i<m;i++)
    {
        mp[mat[0][i]]=0;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mp.find(mat[i][j])!=mp.end() and mp[mat[i][j]]==i-1)
            {
                mp[mat[i][j]]=i;
            }
        }
    }
    vector<int> ans;
    for( auto c:mp)
    {
        if(c.second==n-1)
        {
            ans.push_back(c.first);
        }
    }

    return ans;
}
  

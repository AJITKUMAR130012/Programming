problem Description: https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
Time Complexity: 2^(n^2)
Space Complexity: o(n^2)

class Solution{
    public:
    void dfs(int i,int j,vector<vector<int>> &m,int n,string op,vector<string> &ans)
    {
        if(i<0 or j<0 or i>=n or j>=n or m[i][j]==0) return;
        if(i==n-1 and j==n-1) 
        {
            ans.push_back(op);
            return;
        }
        m[i][j]=0;
        string op1=op;
        dfs(i+1,j,m,n,op1+"D",ans);
        dfs(i-1,j,m,n,op+"U",ans);
        dfs(i,j+1,m,n,op+"R",ans);
        dfs(i,j-1,m,n,op+"L",ans);
        m[i][j]=1;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0]==1)
        {
        dfs(0,0,m,n,"",ans);
        }
        return ans;
    }
};

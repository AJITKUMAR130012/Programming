Problem Statement: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/
Time Complexity: o(n)
Space Complexity: o(n)
  
  
   int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> t(3,vector<int>(n,0));
        t[0][0]=-prices[0];
        t[1][0]=0;
        t[2][0]=0;
        for(int i=1;i<n;i++)
        {
            t[0][i]=max(t[0][i-1],t[2][i-1]-prices[i]);
            t[1][i]=max(t[1][i-1],t[0][i-1]+prices[i]);
            t[2][i]=max(t[2][i-1],t[1][i-1]);
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return t[1][n-1];
    }

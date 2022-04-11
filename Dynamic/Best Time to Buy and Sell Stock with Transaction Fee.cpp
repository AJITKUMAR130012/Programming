Problem Statement: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/submissions/
Time Complexity: o(n)
Space Complexity: o(n)

 int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>> t(2,vector<int>(n,0));
        t[0][0]=-prices[0];
        t[1][0]=0;
        for(int i=1;i<n;i++)
        {
            t[0][i]=max(t[0][i-1],t[1][i-1]-prices[i]);
            t[1][i]=max(t[1][i-1],t[0][i-1]+prices[i]-fee);
        }
        return max(t[0][n-1],t[1][n-1]);
        
    }

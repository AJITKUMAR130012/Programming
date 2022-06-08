Problem Description: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/
Time Complexity: o(n)
Space Complexity: o(n)
  
   int maxProfit(vector<int>& prices) {
        int n=prices.size(),minv=INT_MAX,t=INT_MIN,x;
        vector<int> left(n,0);
        vector<int> right(n,0);
        for(int i=0;i<n;i++)
        {
            minv=min(minv,prices[i]);
            x=prices[i]-minv;
            t=max(x,t);
            left[i]=t;
        }
        int maxv=INT_MIN;
        t=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            maxv=max(maxv,prices[i]);
            x=maxv-prices[i];
            t=max(x,t);
            right[i]=t;
        }
   
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,left[i]+right[i]);
        }
        return ans;
        
    }

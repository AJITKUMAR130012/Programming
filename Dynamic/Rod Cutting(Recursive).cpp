Problem Description: https://practice.geeksforgeeks.org/problems/rod-cutting0840/1
Time Complexity: o(n^2)
Space Complexity; o(n^2)
  
   int fun(int n,int price[],int capacity,vector<vector<int>> &t)
  {
      if(n==0 or capacity==0) return 0;
      if(t[n][capacity]!=-1) return t[n][capacity];
      if(capacity>=n)
      {
          return t[n][capacity]= max(fun(n-1,price,capacity,t),price[n-1]+fun(n,price,capacity-n,t));
      }
      return t[n][capacity]=fun(n-1,price,capacity,t);
  }
  
  
  
    int cutRod(int price[], int n) {
        //code here
        if(n==0) return 0;
        vector<vector<int>> t(n+1,vector<int> (n+1,-1));
        int ans=fun(n,price,n,t);
        return ans;
    }

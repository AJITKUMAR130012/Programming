Problem Description: https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1/?page=1&category[]=Dynamic%20Programming&sortBy=submissions
T.c : o(n^2)
Space Complexity: o(n^2)
  
  int knap(int W,int wt[],int val[],int n,vector<vector<int>> &t)
    {
    if(n==0 or W==0) return 0;
    if(t[n][W]!=-1) return t[n][W];
       if(W>=wt[n-1])
       return t[n][W]=max(val[n-1]+knap(W-wt[n-1],wt,val,n-1,t),knap(W,wt,val,n-1,t));
       else return t[n][W]= knap(W,wt,val,n-1,t);
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> t(n+1,vector<int>(W+1,-1));
       int ans=knap(W,wt,val,n,t);
       return ans;
       
    }

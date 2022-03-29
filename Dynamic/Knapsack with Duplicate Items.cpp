Problem Description:  https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1/?page=3&category[]=Dynamic%20Programming&sortBy=submissions
Time Complexity : o(n*w)
Space Complexity: o(n*w)
  
  //Memoization
  
  
  int knap(int n,int w,int wt[],int val[],vector<vector<int>> &t)
{
    if(n==0 or w==0) return 0;
    if(t[n][w]!=-1) return t[n][w];
    if(w>=wt[n-1]) return t[n][w]= max(val[n-1]+knap(n,w-wt[n-1],wt,val,t),knap(n-1,w,wt,val,t));
    else return t[n][w]= knap(n-1,w,wt,val,t);
}
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        if(N==0 or W==0) return 0;
        vector<vector<int>> t(N+1,vector<int>(W+1,-1));
        int ans=knap(N,W,wt,val,t);
        return ans;
        
    }

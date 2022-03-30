Problem Description: https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1/?page=1&category[]=Dynamic%20Programming&sortBy=submissions
Time Complexity: o(n*w)
Space Complexity: o(n*w)

// Top Down Tabular approach


int knapSack(int w, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> t(n+1,vector<int>(w+1,0));
       for(int i=0;i<=n;i++)
       {
           for(int j=0;j<=w;j++)
           {
               if(i==0 or j==0)
               {
                   t[i][j]=0; continue;
               }
               if(j>=wt[i-1])
               {
                   t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
               }
               else
               {
                   t[i][j]=t[i-1][j];
               }
           }
       }
       return t[n][w];
       
      
       
    }

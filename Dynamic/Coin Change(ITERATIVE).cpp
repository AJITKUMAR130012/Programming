Problem Description: https://practice.geeksforgeeks.org/problems/coin-change2448/1
Time Complexity: o(n*m) n=Target, m=number of sample
Space Complexity: o(n*m) n=target, m=number of sample

 long long int count(int S[], int m, int n) {

        // code here.
        vector<vector<long long>> t(m+1,vector<long long>(n+1,-1));
       // long long ans=coin_count(m,n,S,t);
       // return ans;
       for(int i=1;i<=n;i++)
       {
           t[0][i]=0;
       }
       for(int i=0;i<=m;i++)
       {
           t[i][0]=1;
       }
       for(int i=1;i<=m;i++)
       {
           for(int j=1;j<=n;j++)
           {
               if(j>=S[i-1])
               {
                   t[i][j]=t[i][j-S[i-1]]+t[i-1][j];
               }
               else
               {
                   t[i][j]=t[i-1][j];
               }
           }
       }
       return t[m][n];
    }

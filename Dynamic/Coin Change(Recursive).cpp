Problem Description:https://practice.geeksforgeeks.org/problems/coin-change2448/1
Time Complexity: o(m*n)   m=number of item in array and n= target value
Space Complexity: o(n*m)
  
  long long coin_count(int m,int n,int arr[],vector<vector<long long>> &t)
  {
      if(n==0) return 1;
      if(m==0) return 0;
      if(t[m][n]!=-1) return t[m][n];
      if(n>=arr[m-1])
      {
          return t[m][n]=coin_count(m,n-arr[m-1],arr,t)+coin_count(m-1,n,arr,t);
      }
      else return t[m][n]=coin_count(m-1,n,arr,t);
  }
  
  
  
  
    long long int count(int S[], int m, int n) {

        // code here.
        vector<vector<long long>> t(m+1,vector<long long>(n+1,-1));
        long long ans=coin_count(m,n,S,t);
        return ans;
    }

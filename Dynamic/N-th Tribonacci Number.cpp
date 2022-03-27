Problem Description: https://leetcode.com/problems/n-th-tribonacci-number/
T.c=o(n)
Space complexity: o(n)
  
  int f(int n,vector<int> &t)
    {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        if(t[n]!=-1) return t[n];
        return t[n]=f(n-1,t)+f(n-2,t)+f(n-3,t);
        
    }
    int tribonacci(int n) {
        vector<int> t(n+1,-1);
        int ans=f(n,t);
        return ans;
        
    }

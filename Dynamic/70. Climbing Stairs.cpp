//https://leetcode.com/problems/climbing-stairs/submissions/

    int f(int n,vector<int> &t)
    {
        if(n<=0) return 0;
        if(n==1) return 1;if(n==2) return 2;
        if(t[n]!=-1) return t[n];
        return t[n]= f(n-1,t)+f(n-2,t);
    }
    int climbStairs(int n) {
        vector<int> t(n+1,-1);
        int ans=f(n,t);
        return ans;
        
    }

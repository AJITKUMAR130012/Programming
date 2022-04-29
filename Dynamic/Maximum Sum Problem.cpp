Problem Description:https://practice.geeksforgeeks.org/problems/maximum-sum-problem2211/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Dynamic%20Programming&sortBy=submissions#
Time complexity: o(logn)
Space Complexity: o(n)
  
   int fun(int n,vector<int> &t)
        {
            if(n==0) return 0;
            if(n==1) return 1;
            if(t[n]!=-1) return t[n];
            return max(n,fun(n/2,t)+fun(n/3,t)+fun(n/4,t));
        }
    
    
        int maxSum(int n)
        {
            //code here.
            vector<int> t(n+1,-1);
            return fun(n,t);
        }

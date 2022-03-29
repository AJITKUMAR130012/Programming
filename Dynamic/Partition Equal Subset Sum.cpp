Problem Des: https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1/?page=1&category[]=Dynamic%20Programming&sortBy=submissions#
T.c: o(n*totalsum/2)
Space complexity:o(n*totalsum/2)
  
  bool fun(int n,int arr[],int target,vector<vector<int>> &t)
   {
       if(target==0) return true;
       if(n==0) return false;
       if(t[n][target]!=-1) return t[n][target];
       if(arr[n-1]<=target)
       {
           return t[n][target]=fun(n-1,arr,target-arr[n-1],t) or fun(n-1,arr,target,t);
       }
       else return t[n][target]=fun(n-1,arr,target,t);
   }


    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        
        if(sum&1) return 0;
        int target=sum/2;
        vector<vector<int>> t(N+1,vector<int>(target+1,-1));
        bool ans=fun(N,arr,target,t);
        if(ans) return 1;
        else return 0;
    }

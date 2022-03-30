Problem Description: https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1/?page=1&status[]=solved&category[]=Dynamic%20Programming&sortBy=submissions
Time Complexity: o(n*total_sum/2)
Space Complexity: o(n*total_sum/2)




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
        vector<vector<bool>> t(N+1,vector<bool>(target+1));
        for(int i=0;i<=N;i++)
        {
            t[i][0]=true;
        }
        for(int i=1;i<=target;i++)
        {
            t[0][i]=false;
        }
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=target;j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]=t[i-1][j] or t[i-1][j-arr[i-1]];
                }
                else t[i][j]=t[i-1][j];
            }
        }
        
        if(t[N][target]) return 1;
        else return 0;
    }

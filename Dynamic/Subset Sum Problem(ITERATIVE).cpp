Problem Description: https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/?page=2&category[]=Dynamic%20Programming&sortBy=submissions
Time Complexity: o(n*sum)
Space complexity:o(n*sum)
// Top Down iterative approach

 bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<bool>> t(n+1,vector<bool>(sum+1));
        for(int i=1;i<=sum;i++)
        {
            t[0][i]=false;
        }
        for(int i=0;i<=n;i++)
        {
            t[i][0]=true;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(j>=arr[i-1])
                {
                    t[i][j]=t[i-1][j] or t[i-1][j-arr[i-1]];
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][sum];
        
    }

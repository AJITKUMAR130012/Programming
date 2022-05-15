Problem Description: https://practice.geeksforgeeks.org/problems/transform-string5648/1/?page=1&difficulty[]=1&category[]=Map&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(1)
  
   int transform (string A, string B)
    {
        //code here.
        int n=A.length();
        int m=B.length();
        if(m!=n) return -1;
       int sum=0;
       for(int i=0;i<n;i++)
       {
           sum+=A[i];
           sum-=B[i];
       }
       if(sum!=0) return -1;
       int ans=0;
        for(int i=n-1,j=n-1;i>=0 and j>=0;)
        {
            if(A[i]==B[j])
            {
                i--;
                j--;
            }
            else
            {
                ans++;
                i--;
            }
        }
        return ans;
    }

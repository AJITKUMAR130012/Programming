Problem Statement: https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1#
Time Complexity: o(n)
Space Complexity: o(1)
  
 int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here  
        int i=0,j=0;
        int sum=0,ans=INT_MAX;
        while(j<n)
        {
            sum+=arr[j];
            if(sum<=x)
            {
                j++;
            }
            else
            {
                while(sum>x)
                {
                    if(j-i+1<ans)
                    {
              
                        ans=j-i+1;
                    }
             
                    sum=sum-arr[i];
                    i++;
                }
                j++;
            }
          
        }
        return ans;
    }

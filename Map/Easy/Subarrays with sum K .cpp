Problem Description: https://practice.geeksforgeeks.org/problems/subarrays-with-sum-k/1/
Time Complexity: o(nlogn)
Space Complexity: o(n)
  
  int findSubArraySum(int arr[], int N, int k)
    {
        // code here
        map<int,int> m;
        m[0]=1;
        int sum=0,ans=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
            if(m.find(sum-k)!=m.end())
            {
                ans+=m[sum-k];
            }
            m[sum]++;
            
        }
        return ans;
    }

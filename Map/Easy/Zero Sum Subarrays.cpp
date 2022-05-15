Problem Description: https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1/#
Time Complexity: o(nlogn)
Space Complexity: o(n)
  
   ll findSubarray(vector<ll> arr, int n ) {
        //code here
        ll ans=0;
        map<int,int> m;
        m[0]=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(m.find(sum)!=m.end())
            {
                ans+=m[sum];
            }
            m[sum]++;
        }
        return ans;
    }

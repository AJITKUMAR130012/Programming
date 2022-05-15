Problem Description: https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1/?page=1&difficulty[]=1&category[]=Map&sortBy=submissions#
Time Complexity: o(nlogn)
Space Complexity: o(n)
  
   int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        // Complete the function
        map<int,int> mp;
        mp[0]=-1;
        int sum=0;
        int ans=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(mp.find(sum-k)!=mp.end())
            {
                ans=max(ans,i-mp[sum-k]);
            }
            if(mp.find(sum)==mp.end())
            {
                mp[sum]=i;
            }
        }
       
        return ans;
    } 

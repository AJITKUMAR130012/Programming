Problem Description: https://practice.geeksforgeeks.org/problems/smallest-sum-contiguous-subarray/1/#
Time Complexity: o(n)
Space Complexity: o(1)


int smallestSumSubarray(vector<int>& a){
      //Code here
      int ans=INT_MAX;
      int sum=0;
      int n=a.size();
      for(int i=0;i<n;i++)
      {
          sum+=a[i];
          ans=min(ans,sum);
          if(sum>0) sum=0;
      }
      return ans;
  }

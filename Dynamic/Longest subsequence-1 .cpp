Problem Statement: https://practice.geeksforgeeks.org/problems/nth-catalan-number0817/1/?page=1&difficulty[]=-1&difficulty[]=0&status[]=unsolved&category[]=Dynamic%20Programming&sortBy=submissions#
Time Complexity: o(n)
Space complexity: o(n)
  
   int longestSubsequence(int n, int arr[])
    {
        // code here
      map<int,int> m;
      for(int i=0;i<n;i++)
      {
          if(m.find(arr[i]-1)!=m.end() and m.find(arr[i]+1)!=m.end())
          {
              m[arr[i]]=1+max(m[arr[i]-1],m[arr[i]+1]);
          }
          else if(m.find(arr[i]-1)!=m.end())
          {
              m[arr[i]]=1+m[arr[i]-1];
          }
          else if(m.find(arr[i]+1)!=m.end())
          {
              m[arr[i]]=1+m[arr[i]+1];
          }
          else 
          {
              m[arr[i]]=1;
          }
      }
      int ans=0;
      for( auto c: m)
      {
          if( c.second>ans)
          {
              ans=c.second;
          }
      }
        return ans;
    }

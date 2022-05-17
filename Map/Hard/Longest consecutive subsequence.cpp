Problem Description: https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1/
Time Complexity: o(nlogn)
Space Complexity: o(n)    --> space taken by heap


int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      map<int,int> m;
      for(int i=0;i<N;i++)
      {
          m[arr[i]]++;
      }
      vector<int> v;
      for(int i=0;i<N;i++)
      {
          if(m.find(arr[i]-1)==m.end())
          {
              v.push_back(arr[i]);
          }
      }
      int ans=0;
      for( auto c: v)
      {
          int cn=0;
         while(m.find(c)!=m.end())
         {
             cn++;
             c++;
         }
         ans=max(ans,cn);
      }
      return ans;
    }

Problem Statement: https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#
Time Complexity: o(n^2)
Space Complexity: o(n)
  
  bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
          map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[A[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int b=A[i]+A[j];
            b=X-b;
            if(m.find(b)!=m.end() and m[b]!=i and m[b]!=j) return true;
        }
    }
    return false;
    }

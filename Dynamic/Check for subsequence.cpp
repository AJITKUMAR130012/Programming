Problem Statement: https://practice.geeksforgeeks.org/problems/check-for-subsequence4930/1#
Space Complexity: o(1)
Time Complexity: o(m)
  
   bool isSubSequence(string A, string B) 
    {
        // code here
        int n=A.length();
        int m=B.length();
        int j=0;
        for(int i=0;i<m and j<n;i++)
        {
            if(A[j]==B[i])
            j++;
        }
        return j==n;
    }

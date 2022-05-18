Problem Statement: https://practice.geeksforgeeks.org/problems/sum-of-elements-between-k1th-and-k2th-smallest-elements3133/1/?page=1&difficulty[]=0&category[]=Heap&sortBy=submissions
Time Complexity: o(nlogn)
Space Complexity: o(1)
  
   long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        sort(A,A+N);
        long long sum=0;
        for(int i=K1;i<=K2-2;i++)
        {
            sum+=A[i];
        }
        return sum;
    }

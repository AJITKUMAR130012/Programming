Problem Statement: https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/
Time Complexity: o(n)
Space Complexity: o(1)
  
   int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) 
    {
        int ans=0;
       int i=0,j=0;
       long long prod=1;
       while(j<n)
       {
           prod*=a[j];
           if(prod<k)
           {
               j++;
           }
           else
           {
               while(prod>=k)
               {
                   ans++;
                   ans+=(n-j-1);
                   prod/=a[i];
                   i++;
               }
               j++;
           }
       }
      long long x;
      if(n&1)
      {
          x=n*((n+1)/2);
      }
      else
      {
          x=(n/2)*(n+1);
      }
      return x-(ans);
    }

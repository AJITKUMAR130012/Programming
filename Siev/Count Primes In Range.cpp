https://practice.geeksforgeeks.org/problems/count-primes-in-range1604/1/?problemType=functional&difficulty[]=0&page=1&sortBy=newest&category[]=sieve&query=problemTypefunctionaldifficulty[]0page1sortBynewestcategory[]sieve

class Solution {
  public:
  //int prime[200000];
    int countPrimes(int L, int R) {
        // code here
        int prime[200006];
        memset(prime,-1,sizeof(prime));
        for(int i=2;i<=R;i=i+2)
        {
            prime[i]=0;
        }
        prime[2]=1;
        prime[0]=0;
        prime[1]=0;
        for( long long i=3;i<=R;i=i+2)
        {
            if(abs(prime[i]))
            {
                for(long long j=i*i;j<=R;j=j+i)
                {
                    prime[j]=0;
                }
            }
        }
        
//    int prime_count[200005];
//    prime_count[0]=0;
//    for(int i=1;i<=R;i++)
//    {
//        prime_count[i]=prime-count[i-1]+prime[i];
//    }
//    int ans=prime_count[R]-prime_count[L-1];
       int ans=0;
       for(int i=L;i<=R;i++)
       {
           ans+=abs(prime[i]);
       }
    return ans;
    }
};

//https://practice.geeksforgeeks.org/problems/largest-prime-factor2601/1/?problemType=functional&difficulty[]=1&page=1&category[]=sieve&query=problemTypefunctionaldifficulty[]1page1category[]sieve#


class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        int ans=0;
        for(int i=2;i*i<=N;i++)
        {
            if(N%i==0)
            {
                while(N%i==0)
                {
                    ans=max(ans,i);
                    N=N/i;
                }
            }
        }
        if(N!=1)
        {
            ans=max(ans,N);
        }
        return ans;
    }
};

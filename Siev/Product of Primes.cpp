
//https://practice.geeksforgeeks.org/problems/product-of-primes5328/1/?problemType=functional&difficulty[]=1&page=1&category[]=sieve&query=problemTypefunctionaldifficulty[]1page1category[]sieve#

class Solution{
public:
    long long t=1e9+7;
    vector<int> seive(bitset<100000> &b)
    {
        vector<int> v;
        b[0]=1;
        b[1]=1;
        for(long long i=2;i<=100000;i++)
        {
            if(b[i]==0)
            {
            v.push_back(i);
            for(long long j=i*i;j<=100000;j=j+i)
            {
                b[j]=1;
            }
        }
      
    }
      return v;
    }
    long long mul(long long a,long long b)
    {
        return(a*b)%t;
    }
    long long primeProduct(long long m, long long n){
        // code here
        bitset<100000> b1,b2;   //b1 represent prime seive and b2 used to segmented sieve
        b1.reset();
        vector<int> v=seive(b1);
     /*   for(int i=0;i*i<=n;i++) cout<<v[i]<<" ";
        cout<<endl;
     */
        for(int i=0;v[i]*v[i]<=n;i++) 
        {
            long long j=(m/v[i])*v[i];
            if(j<m) j=j+v[i];
            for(;j<=n;j=j+v[i])
            {
                if(j>v[i])
                    b2[j-m]=1;
            }
        }

     //   for(int i=0;i<n-m+1;i++) cout<<b2[i]<<" ";
     //   cout<<endl;
    /*  for(int i=0;i<n-m+1;i++)
        {
            if(b2[i]==0) 
            {
                cout<<i+m<<" ";
            }
        }
        cout<<endl;
        */
     long long ans=1;
        for(int i=0;i<n-m+1;i++)
        {
            if(b2[i]==0) 
            {
                ans=mul(ans,i+m);
            }
        }
        return ans;
    
    }
};

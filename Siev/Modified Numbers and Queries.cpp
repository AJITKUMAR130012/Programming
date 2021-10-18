//https://practice.geeksforgeeks.org/problems/modified-numbers-and-queries0904/1/?problemType=functional&difficulty[]=0&page=1&sortBy=newest&category[]=sieve&query=problemTypefunctionaldifficulty[]0page1sortBynewestcategory[]sieve

class Solution {
  public:
//  vector<int> v(10001,0);
  void prime(vector<int> &v,int n)
  {
      v[1]=1;
      for(int i=2;i<n;i=i+2)
      {
          if(i!=2) v[i]=1;
      }
      for(long long i=3;i<n;i=i+2)
     {
         if(v[i]==0) 
        {
          for(long long j=i*i;j<n;j=j+i)
          {
              v[j]=1;
          }
        }
      
     }
  }
  void prime_seive(int n,vector<int> &v)
  {
      v[1]=1;
      for(int i=2;i<n;i=i+2)
      {
          if(i!=2) v[i]=1;    //all even number is non_prime except 2
      }
      for(long long i=3;i<n;i=i+2)
      {
          if(v[i]==0) 
          {
          for(long long j=i*i;j<n;j=j+i)
          {
              v[j]=1;         //multiple of prime number making non_prime
          }
          }
      }
      
  }
/*  int fun(int n,vector<int> &v)
  {
      int sum=0;
      if(n==1) return 1;
      for(int i=2;i<=n;i++)
      {
          if(v[i]==0 and n%i==0)
          {
             sum+=i; 
          }
      }
      return sum;
  }
  */
    int sumOfAll(int l, int r){
        int n=r+1;
        vector<int> v(n,0);
        prime(v,n);
    /*    for(int i=1;i<=n;i++)
      {
          if(v[i]==0) cout<<i<<" ";
      }
      */
        int sum=0;
        for(int i=l;i<=r;i++)
        {
          if(i==1) sum+=1;
          else
          {
              for(int j=2;j<=i;j++)
              {
                  if(i%j==0 and v[j]==0) sum+=j;
              }
          }
        }
        
        return sum;
    }
};

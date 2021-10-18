//https://practice.geeksforgeeks.org/problems/sexy-primes3341/1/?problemType=functional&difficulty[]=0&page=1&sortBy=newest&category[]=sieve&query=problemTypefunctionaldifficulty[]0page1sortBynewestcategory[]sieve

class Solution {
  public:
  void prime_seive(vector<int> &v,int n)
  {
      v[1]=1;
      for(int i=2;i<=n;i=i+2)
      {
          if(i!=2) v[i]=1;    //array containing 1 means non_prime
      }
      for(int i=3;i<=n;i=i+2)
      {
          if(v[i]==0)           // prime number
          for(int j=i*i;j<=n;j=j+i)
          {
              v[j]=1;
          }
      }
   /*   for(int i=1;i<=n;i++)
      {
          if(v[i]==0)
          cout<<i<<" ";
      }
      */
  }
    vector<int> sixyPrime(int L, int R) {
        // code here
        int n=R;
        vector<int> ans;
      //  ans.push_back(0);
        vector<int> v(n+1,0);   //initially all number is prime
        prime_seive(v,n);
        for(int i=L;i<=R;i++)
        {
            if(v[i]==0 and i+6<=R and v[i+6]==0)
            {
            ans.push_back(i);
            ans.push_back(i+6);
            }
        }
        if(ans.size()==0) 
        {
            ans.push_back(-1);
            return ans;
        }
        return ans;
        
    }
};

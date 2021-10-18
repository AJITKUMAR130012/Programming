//https://practice.geeksforgeeks.org/problems/prime-number-of-set-bits4632/1/?problemType=functional&difficulty[]=0&page=1&sortBy=newest&category[]=sieve&query=problemTypefunctionaldifficulty[]0page1sortBynewestcategory[]sieve

class Solution {
  public:

  bool prime(int n)
  {
      if(n==1) return false;
      if(n==2) return true;
      for(int i=2;i*i<=n;i++)
      {
          if(n%i==0) return false;
      }
      return true;
  }
    int primeSetBits(int L, int R){
        // code here
        int cn=0;
        for(int i=L;i<=R;i++) 
        {
     //      cout<<__builtin_popcount(4) << endl;
           int x=__builtin_popcount(i);
      //      cout<<cn;
           if(prime(x)) cn++;
      
        }
        return cn;
    }
};

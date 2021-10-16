//GeeksForGeeks :- https://practice.geeksforgeeks.org/problems/primes-sum5827/1/?problemType=functional&difficulty[]=0&page=1&category[]=sieve&query=problemTypefunctionaldifficulty[]0page1category[]sieve

class Solution {
  public:
  
  bool prime(int x)
  {
      if(x==1) return false;
      if(x==2) return true;
      for(int i=2;i*i<=x;i++)
      {
          if(x%i==0) return false;
      }
      return true;
  }
    string isSumOfTwo(int n){
        
        // code here
        for(int i=1;i<=n;i++)
        {
            int x=n-i;
            if(prime(x) and prime(i)) return "YES";
        }
        return "NO";
    }
};

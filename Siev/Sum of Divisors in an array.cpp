//https://practice.geeksforgeeks.org/problems/sum-of-divisors-in-an-array2954/1/?problemType=functional&difficulty[]=0&page=1&sortBy=newest&category[]=sieve&query=problemTypefunctionaldifficulty[]0page1sortBynewestcategory[]sieve

class Solution {
  public:
  int fun(int x)
  {
      if(x==0) return 1;
      int sum=0;
      for(int i=1;i<x;i++)
      {
          if(x%i==0)
          {
              sum+=i;
          }
      }
      return sum;
  }
    vector<int> sumOfProperDivisors(int arr[], int N) {
        // code here
        vector<int> ans;
        vector<int> v;
        for(int i=0;i<N;i++)
        {
            ans.push_back(fun(arr[i]));
        }
        return ans;
    }
};

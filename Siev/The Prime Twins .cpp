//https://practice.geeksforgeeks.org/problems/the-prime-twins2419/1/?problemType=functional&difficulty[]=0&page=1&sortBy=newest&category[]=sieve&query=problemTypefunctionaldifficulty[]0page1sortBynewestcategory[]sieve


class Solution {
  public:
  void prime_seive(vector<int> &v,int n)
  {
      v[1]=1;
      for(int i=2;i<=n;i=i+2)
      {
          if(i!=2) v[i]=1;
      }
      for(long long i=3;i<=n;i=i+2)
     {
         if(v[i]==0) 
        {
          for(long long j=i*i;j<=n;j=j+i)
          {
              v[j]=1;
          }
        }
      
     }
    /* for(int i=1;i<=n;i++)
     {
         if(v[i]==0)
         cout<<i<<" ";
     }
     cout<<endl;
     */
     
  }
  
    vector<int> primeTwins(int L, int R) {
        // code here
        bool flag=0;
        int n=R+1;
        vector<int> v(n+1,0);
        prime_seive(v,n);
        vector<int> ans;
        int ans1,ans2;
        v[0]=1;
        for(int i=L;i<=R;i++)
        {
            if(v[i]==0)
            {
                int j=i+2;
                if(j<=n and v[j]==0)
                {
                    ans1=i;
                    ans2=j;
                    flag=true;
                    break;
                }
            }
        }
        if(flag)
        {
        ans.push_back(ans1);
        ans.push_back(ans2);
        }
        else 
        {
            ans.push_back(-1);
        }
        return ans;
    }
};

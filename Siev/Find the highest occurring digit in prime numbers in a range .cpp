//https://practice.geeksforgeeks.org/problems/find-the-highest-occurring-digit-in-prime-numbers-in-a-range3634/1/?problemType=functional&difficulty[]=0&page=1&sortBy=newest&category[]=sieve&query=problemTypefunctionaldifficulty[]0page1sortBynewestcategory[]sieve

class Solution {
  public:
  void prime_sieve(vector<int> &v,int n)
  {
      v[1]=0;
      for(int i=2;i<=n;i=i+2)
      {
          if(i!=2) v[i]=1;
      }
      for(long long i=3;i<=n;i=i+2)
      {
          if(v[i]==0)
          for(long long j=i*i;j<=n;j=j+i)
          {
              v[j]=1;
          }
      }
    
  }
    int maxDigit(int L, int R)  {
        // code here
        int n=R;
        vector<int> v(n+1,0);
        unordered_map<int,int> m;
        prime_sieve(v,n);
        for(int i=L;i<=R;i++)
        {
            if(v[i]==0)
            {
                int x=i;
                while(x)
                {
                   m[x%10]++;
                   x=x/10;
                }
            }
        }
        int cn=0,ans;
        bool flag=false;
      /*  for(auto c:m)
        {
        cout<<c.first<<"->"<<c.second<<endl;
        }
        */
        
    //    cout<<endl;
        
        for(auto c:m)
        {
        //cout<<c.first<<"->"<<c.second<<endl;
            if(c.second>=cn)
            {
                flag=true;
                if(cn==c.second)
                {
                    ans=max(ans,c.first);
                    
                }
                else
                {
                ans=c.first;
                cn=c.second;
                }
            }
        
        }
        if(flag)
        return ans;
        else return -1;
    }
};

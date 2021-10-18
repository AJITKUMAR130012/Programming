
//https://practice.geeksforgeeks.org/problems/least-prime-factor5216/1/?problemType=functional&difficulty[]=0&page=1&sortBy=newest&category[]=sieve&query=problemTypefunctionaldifficulty[]0page1sortBynewestcategory[]sieve

class Solution {
  public:
  int search(int x,vector<int> v)
  {
      int start=0;

  }
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<long long> v(n+1,0);
        vector<int> seiv;
        vector<int > ans(n+1);
        ans.push_back(0);
        for(int i=2;i<=n;i=i+2)
        {
            if(i!=2)
             v[i]=1;
        }
        for(long long i=3;i<=n;i=i+2)
        {
            if(v[i]==0)
            {
                long long x=i;
                for(long long j=x*x;j<=n;j=j+x) v[j]=1;
            }
        }
        seiv.push_back(2);
        for(int i=3;i<=n;i++)
        {
            if(v[i]==0)
            seiv.push_back(i);
        }
        int l=seiv.size();
        
        
        for(int i=1;i<=n;i++)
        {
            if(i==1) ans[i]=1;
         //   else if(i==2) ans[i]=2;
            else
            {
               for(int j=0;j<l;j++)
               {
                if(i%seiv[j]==0) 
                {
                    ans[i]=(seiv[j]);
                    break;
                }
                
               }
            }
        }
  //      */
 //       for(long long i=0;i<l;i++) cout<<seiv[i]<<" ";
 //       cout<<endl;
  //     ans.push_back(0);
/*  for(int i=0;i<n;i++)
  cout<<ans[i]<<" ";
  cout<<endl;
  */
        return ans;
    }
};

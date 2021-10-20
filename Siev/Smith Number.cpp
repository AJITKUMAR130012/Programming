//https://practice.geeksforgeeks.org/problems/smith-number4132/1/?category[]=sieve&category[]=sieve&problemType=functional&difficulty[]=1&page=1&query=category[]sieveproblemTypefunctionaldifficulty[]1page1category[]sieve


class Solution {
  public:
  int digit(int n)
  {
      int sum=0;
      while(n)
      {
          sum+=(n%10);
          n=n/10;
      }
      return sum;
  }
    int smithNum(int n) {
        // code here
        int x=digit(n);
        vector<pair<int,int>> v;
        bool prime=true;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                prime=false;
            }
        }
        if(prime==true) return 0;
   //    cout<<"Ajit"<<endl;
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                int cn=0;
                while(n%i==0)
                {
                    cn++;
                    n=n/i;
                }
                v.push_back({i,cn});
            }
        }
        int ans=0;
    /*    for(auto c: v)
        {
            
            cout<<c.first<<" "<<c.second<<" ";
          
      *///  }
        for(auto c: v)
        {
            int m=digit(c.first);
          //  cout<<c.first<<" "<<c.second<<" ";
            ans+=((m)*(c.second));
        }
        if(ans==x) return 1;
        else return 0;
    }
};

//https://practice.geeksforgeeks.org/problems/ordered-prime-signature3247/1/?problemType=functional&difficulty[]=0&page=1&sortBy=newest&category[]=sieve&query=problemTypefunctionaldifficulty[]0page1sortBynewestcategory[]sieve

class Solution{
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
                v[j]=1;
            }
        }
       
    }
    vector<int> orderedPrime(int n){
        // code here
        vector<int> v(n+1,0);
        vector<int> ans;
        vector<pair<int,int>> p;
        prime_seive(v,n);
        int x=n;
        int cn;
        for(int i=2;i<=x;i++)
        {
            
            if(v[i]==0)
            {
                cn=0;
                while(x%i==0)
                {
                    cn++;
                    x=x/i;
                }
                if(cn!=0)
               p.push_back({i,cn}) ;
            }
        }
     /*   cn=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0 ) cn++;
        }
        */
        for(int i=0;i<p.size();i++) 
        {
        ans.push_back(p[i].second);
      
        }
        cn=1;
        for(int i=0;i<ans.size();i++)
        {
            cn*=(ans[i]+1);
        }
   
        sort(ans.begin(),ans.end());
        ans.push_back(cn);
        return ans;
    }
};

https://practice.geeksforgeeks.org/problems/kth-prime-factor-of-a-number0132/1/?problemType=functional&difficulty[]=0&page=1&sortBy=newest&category[]=sieve&query=problemTypefunctionaldifficulty[]0page1sortBynewestcategory[]sieve


class Solution{
public:
    void prime(vector<int> &v,int n)
    {
        v[0]=1;
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
   /*     for(int i=1;i<=n;i++)
        {
            if(v[i]==0) cout<<i<<" ";
        }
        */
    }
    int kthPrime(int n, int k){
        // code here
        vector<int> v(n+1,0) ; //Initially all prime are prime number
        prime(v,n);
        vector<pair<int,int>> ans;
        int x=n;
        for(int i=0;i<=n;i++)
        {
            if(v[i]==0 and n%i==0)
            {
                int cn=0;
                while(x%i==0)
                {
                    cn++;
                    x=x/i;
                }
                ans.push_back({i,cn});
            }
        }
        int val=0;
        for(int i=0;i<ans.size();i++)
        {
            int x=ans[i].second;
            while(x!=0)
            {
                x--;
                val++;
           //     cout<<ans[i].first<<" "; 
                if(val==k) return ans[i].first;
            }
        }
        return -1;
        
    }
};

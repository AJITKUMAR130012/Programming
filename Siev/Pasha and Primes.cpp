//https://practice.geeksforgeeks.org/problems/pasha-and-primes0438/1/?problemType=functional&difficulty[]=1&page=1&category[]=sieve&query=problemTypefunctionaldifficulty[]1page1category[]sieve


class Solution {
  public:
    void prime(bitset<1000001> &b,int s)
    {
        b[0]=b[1]=0;
        for(long long i=2;i<=s;i++ )
        {
            if(b[i]==1)
            {
              for(long long j=i*i;j<=s;j=j+i)
              {
                b[j]=0;
              }
            }
        }
    }
    vector<int> primeRange(int N, int Q, vector<int> A,
                           vector<pair<int, int>> R) {
        // code here
        vector<int> ans;
        bitset<1000001> b;
        b.set();
        int x=*max_element(A.begin(),A.end());
        prime(b,x);
        /*
        for(int i=0;i<=x;i++)
        {
            if(b[i]==0) cout<<i<<" ";
        }
        */
        int cum[1000001];
        int cn=0;
        for(int i=0;i<A.size();i++)
        {
            if(b[A[i]]==1)
            {
                cn++;
            }
            cum[i]=cn;
        }
     /*   for(int i=1;i<=x;i++)
        {
            cout<<cum[i]<<" ";
        }
        */
      //  for()
        for(int q=0;q<Q;q++)
        {
            
            int i=R[q].first-1;
            int j=R[q].second-1;
            int o=cum[j]-cum[i];
            if(b[A[i]]==1)
            ans.push_back(o+1);
            else
            ans.push_back(o);
            
        }
        
        return ans;
    }

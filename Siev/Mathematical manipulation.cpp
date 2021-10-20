//https://practice.geeksforgeeks.org/problems/mathematical-manipulation2005/1/?problemType=functional&difficulty[]=1&page=1&category[]=sieve&query=problemTypefunctionaldifficulty[]1page1category[]sieve


class Solution {
public:
	int CommonFactor(int n){
	    // Code here
	    int ans=0;
	    bitset<100005> b;
	    b.reset();
	   // for(int i=0;i<n;i++) cout<<b[i]<<" ";
	    for(long long i=2;i<=n;i++)
	    {
	        if(b[i]==0 and n%i==0)
	        {
	            ans++;
	            for(long long j=2*i;j<=n;j=j+i)
	            {
	                if(b[j]==0)
	                {
	                    b[j]=1;
	                    ans++;
	                }
	            }
	        }
	    }
	    return ans;
	}

};

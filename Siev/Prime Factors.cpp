//https://practice.geeksforgeeks.org/problems/prime-factors5052/1/?problemType=functional&difficulty[]=0&page=1&sortBy=newest&category[]=sieve&query=problemTypefunctionaldifficulty[]0page1sortBynewestcategory[]sieve

class Solution{
	public:
	void prime_seive(vector<int> &v,int n)
	{
	    v[1]=1;                 //1 is non_prime
	    for(int i=2;i<=n;i=i+2)
	    {
	        if(i!=2) v[i]=1;   //all even is non_prime except 2
	    }
	    for(long long i=3;i<=n;i=i+2)
	    {
	        if(v[i]==0)
	        for(long long j=i*i;j<=n;j=j+i)
	        {
	            v[j]=1;
	        }
	    }
	/*    for(int i=1;i<=n;i++)
	    {
	        if(v[i]==0) cout<<i<<" ";
	    }
	    cout<<endl;
	    */
	}
	vector<int>AllPrimeFactors(int n) {
	    // Code here
	    vector<int> v(n+1,0);
	    vector<int> ans;                    //all number is prime initially
	    prime_seive(v,n);
//	    ans.push_back(0);
        for(int i=2;i<=n;i++)
        {
            if(v[i]==0 and n%i==0)
            ans.push_back(i);
        }
     /*   if(ans.size()==0)
        {
            ans.push_back(-1);
            return ans;
        }
        */
	    return ans;
	    
	}
};

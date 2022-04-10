Problem Description: https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/#
Space Complexity: o(n)
Time complexity: o(n)
  
  
  	int CountWays(string s){
		    // Code here
		    int mod=1e9+7;
		    int n=s.length();
		    if(n==0) return 1;
		    vector<long long> ans(n,0);
		    if(s[0]=='0') return 0;
		    ans[0]=1;
		    for(int i=1;i<n;i++)
		    {
		        string p=s.substr(i-1,2);
		        // it is going to hadle the case 10 and 20
		        if(p[1]=='0')
		        {
		            if(p[0]=='1' or p[0]=='2')
		            {
		                ans[i]=(i-2>=0?ans[i-2]:1);
		            }
		            else
		            {
		                ans[i]=0;
		            }
		        }
		        else if(p[0]=='0')
		        {
		            ans[i]=ans[i-1];
		        }
		        else
		        {
		            int x=stoi(p);
		          //   cout<<x<<" ";
		            if(x<=26) ans[i]=(ans[i-1]+(i-2>=0?ans[i-2]:1))%mod;
		            else ans[i]=ans[i-1];
		        }
		        p.erase();
		        
		    }
	
		    return ans[n-1]%mod;
		}

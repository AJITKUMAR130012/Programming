Problem Description: https://practice.geeksforgeeks.org/problems/consecutive-1s-not-allowed1912/1/#
Time Complexity: o(n)
Space Complexity: o(n)


	ll countStrings(int n) {
	    // code here
	    int mod =1e9+7;
	    vector<vector<int>> t(2,vector<int>(n+1));
	    for(int i=0;i<=n;i++)
	    {
	        if(i==0)
	        {
	            t[0][i]=0;
	            t[1][i]=0;
	            continue;
	        }
	        if(i==1)
	        {
	            t[0][i]=1;
	            t[1][i]=1;
	            continue;
	        }
	        t[0][i]=(t[0][i-1]+t[1][i-1])%mod;
	        t[1][i]=(t[0][i-1])%mod;
	    }
	 /*   for(int i=0;i<=1;i++)
	    {
	        for(int j=0;j<=n;j++)
	        {
	            cout<<t[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	    */
	    	return (t[0][n]+t[1][n])%mod;
	}

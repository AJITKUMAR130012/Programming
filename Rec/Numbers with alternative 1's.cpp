problem description: https://practice.geeksforgeeks.org/problems/numbers-with-alternative-1s4819/1/?page=1&difficulty[]=1&status[]=unsolved&category[]=Map&sortBy=submissions#
Time Complexity: O(2^n)
Space Complexity: o(n)---> function call stack


	void fun(int n,int max_num,vector<int> &ans)
	{
	    if(n&1)
	    {
	       int x=n<<1;
	       if(x<max_num)
	       {
	           ans.push_back(x);
	           fun(x,max_num,ans);
	       }
	    }
	    else
	    {
	        int x=n<<1;
	        int y=x^1;
	        if(x<max_num)
	        {
	            ans.push_back(x);
	            fun(x,max_num,ans);
	        }
	        if(y<max_num)
	        {
	            ans.push_back(y);
	            fun(y,max_num,ans);
	        }
	    }
	    
	    return;
	}
	
	
	
	
	vector<int>numberWithNoConsecutiveOnes(int n){
	    // Code here
	     int m=pow(2,n)-1;
	   //  cout<<m<<" ";
	     vector<int> ans;
	     ans.push_back(1);
	     fun(1,m,ans);
	     sort(ans.begin(),ans.end());
	     return ans;
   
	}

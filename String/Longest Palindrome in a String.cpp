Problem Description: https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1#
Time Complexity: o(n^2)
Space Complexity: o(n^2)
  
   string longestPalin (string S) {
        // code here
        int t[1001][1001];
        memset(t,-1,sizeof(t));
        int n=S.length();
        int start=0,end=0;
        for(int i=0;i<n;i++)
        {
            t[i][i]=1;
        }
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            if(S[i]==S[i+1])
            {
                if(!flag)
                {
                start=i;
                end=i+1;
                flag=true;
                }
                t[i][i+1]=1;
            }
        }
        int i=0,j=0;
        
        for(int k=3;k<=n;k++)
        {
            for( i=0;i<=n-k;i++)
            {
                 j=i+k-1;
                if(t[i+1][j-1]==1 and S[i]==S[j])
                {
                    t[i][j]=1;
                    if(end-start+1<k)
                    {
                    start=i;
                    end=j;
                    }
                }
            }
        }
   
        return S.substr(start,end-start+1);
    }

Problem Statement: https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1/#
TIme complexity: o(n)
  Space Complexity: o(n)
    
     int countFriendsPairings(int n) 
    { 
        // code here
        long long mod= 1e9+7;
        vector<long long> t(n+1,0);
        t[0]=t[1]=1;
        for(int i=2;i<=n;i++)
        {
            t[i]=(((i-1)*(t[i-2])%mod)%mod+t[i-1])%mod;
        }
        return t[n];
    }

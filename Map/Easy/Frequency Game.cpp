Problem Statement: https://practice.geeksforgeeks.org/problems/frequency-game/1/?page=1&difficulty[]=0&category[]=Map&sortBy=submissions#
Time complexity: o(n)
Space Complexity: o(n)
  
  int LargButMinFreq(int arr[], int n) {
    // code here
   map<int,int> mp;
   for(int i=0;i<n;i++)
   {
       mp[arr[i]]++;
   }
   int ans=0;
   int sol=INT_MAX;
   for(auto c:mp)
   {
       if(c.second<=sol)
       {
           sol=c.second;
           if(sol==c.second)
           {
               ans=max(c.first,sol);
           }
           else
           {
               ans=c.second;
           }
       }
   }
   return ans;
}

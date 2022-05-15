Problem Statement: https://practice.geeksforgeeks.org/problems/distinct-substrings2516/1/?page=1&difficulty[]=0&category[]=Map&sortBy=submissions#
Time Complexity: o(nlogn)
Space complexity: o(n)   if all elememnt are distinict then we have map of size n-2
  
  int fun(string s)
{
    //code here
    int j=0,i=0;
    int n=s.length();
    map<string,int> m;
    while(j<n)
    {
        if(j-i+1<2)
        {
            j++;
        }
        else if(j<n and j-i+1==2)
        {
            while(j<n and j-i+1==2)
            {
                m[s.substr(i,2)]++;
                i++;
                j++;
            }
        }
    }
    return m.size();
    
}

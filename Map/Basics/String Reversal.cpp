Problem Description: https://practice.geeksforgeeks.org/problems/string-reversalunpublished-for-now5324/1/?page=1&difficulty[]=-1&category[]=Map&sortBy=submissions#
Time Complexity: o(nlogn)
Space Complexity: o(n)
  
  string reverseString(string s)
{
    //code here.
    string ans="";
    map<char,int> m;
    int n=s.length();
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]!=' ' and m.find(s[i])==m.end())
        {
            m[s[i]]=i;
            ans+=string(1,s[i]);
        }
    }
    
    return ans;
   
}

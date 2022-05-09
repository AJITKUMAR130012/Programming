Problem Description: https://practice.geeksforgeeks.org/problems/easy-string2212/1/?page=2&difficulty[]=0&category[]=Stack&sortBy=submissions#
Time COmplexity: o(n)
Space Complexity: o(n)
  
  string transform(string S){
    //complete the function here
    string ans="";
    int n=S.length();
    for(int i=0;i<n-1;i++)
    {
        int cn=1;
        while(tolower(S[i])==tolower(S[i+1]))
        {
            cn++;
            i++;
        }
        ans+=to_string(cn);
        ans+=string(1,tolower(S[i]));
    }
    if(tolower(S[n-2])!=tolower(S[n-1]))
    {
       ans+=to_string(1);
       ans+=tolower(S[n-1]);
    }
    return ans;
}


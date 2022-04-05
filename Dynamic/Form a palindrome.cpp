Problem Description: https://practice.geeksforgeeks.org/problems/form-a-palindrome1455/1/
Time Complexity: o(n*n)
Space Complexity: o(n*n)
  
  int countMin(string s){
    //complete the function here
    int n=s.length();
    string h=s;
    vector<vector<int>> t(n+1,vector<int>(n+1));
    reverse(h.begin(),h.end());
    for(int i=0;i<=n;i++)
    {
       for(int j=0;j<=n;j++)
       {
           if(i==0 or j==0)
           {
               t[i][j]=0;
               continue;
           }
           else
           {
               if(s[i-1]==h[j-1]) t[i][j]=1+t[i-1][j-1];
               else t[i][j]=max(t[i-1][j],t[i][j-1]);
           }
       }
    }
    return n-t[n][n];
    }

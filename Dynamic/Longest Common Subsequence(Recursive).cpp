Problem Statement: https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1
Time Complexity: o(n1*n2)    n1= length of s1 and n2= length of s2
Space Complexity: o(n1*n2)



int lcsf(int x,int y,string s1,string s2,vector<vector<int>> &t)
    {
        if(x==0 or y==0) return 0;
        if(t[x][y]!=-1) return t[x][y];
        if(s1[x-1]==s2[y-1]) return t[x][y]= 1+lcsf(x-1,y-1,s1,s2,t);
         return t[x][y]= max(lcsf(x,y-1,s1,s2,t),lcsf(x-1,y,s1,s2,t));
    }
    
    
    
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        vector<vector<int>> t(x+1,vector<int>(y+1,-1));
        int ans=lcsf(x,y,s1,s2,t);
        return ans;
    }

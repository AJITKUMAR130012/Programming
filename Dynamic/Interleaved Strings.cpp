Problem Description: https://practice.geeksforgeeks.org/problems/interleaved-strings/1#
Time Complexity: o(n*m)
Space Complexity: o(n*m)
  
  bool fun(string A,string B,string C,int n1,int n2,int n3,int t[][1001])
    {
        if(n3==0) return true;
        if(t[n1][n2]!=-1) return t[n1][n2];
        bool a,b;
        if(C[n3-1]==A[n1-1])  a= fun(A,B,C,n1-1,n2,n3-1,t);
        if(C[n3-1]==B[n2-1])  b=fun(A,B,C,n1,n2-1,n3-1,t);
        return t[n1][n2]=a or b;
        
    }
    
    
    
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
       int n1=A.length();
       int n2=B.length();
       int n3=C.length();
       if(n1+n2!=n3) return false;
       int t[1001][1001];
       memset(t,-1,sizeof(t));
       return fun(A,B,C,n1,n2,n3,t);
    }

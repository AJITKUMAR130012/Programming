Problem Statement: https://practice.geeksforgeeks.org/problems/binary-string-1587115620/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Strings&sortBy=submissions
Time Complexity: o(n)
Space Complexity: o(1)
  
  long binarySubstring(int n, string a){
        
        int cn=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1') cn++;
        }
       return (cn*(cn-1)/2);
        
    }

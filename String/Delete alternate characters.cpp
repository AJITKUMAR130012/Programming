Problem Description: https://practice.geeksforgeeks.org/problems/java-delete-alternate-characters4036/1/?page=1&difficulty[]=-2&category[]=Strings&sortBy=submissions#
Time Complexity: o(n)
Space Complexity:o(n)
  
      string modify (string s)
    {
        //code here.
        int cn=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                s.erase(s.begin()+i);
                
              //  cout<<i<<" ";
                cn++;
                i--;
                n--;
            }
        }
        return s;
    }



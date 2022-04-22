Problem Statement: https://practice.geeksforgeeks.org/problems/remove-spaces0128/1/?page=1&difficulty[]=-2&category[]=Strings&sortBy=submissions
Time Complexity: o(n)
Space Complexity:o(1)
  
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

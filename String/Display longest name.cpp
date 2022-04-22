Problem Statement: https://practice.geeksforgeeks.org/problems/display-longest-name0853/1/?page=1&difficulty[]=-2&category[]=Strings&sortBy=submissions
Time Complexity: o(n)
Space Complexity:o(1)
  
  
 string longest(string names[], int n)
    {
        string ans;
        int p=0;
        for(int i=0;i<n;i++)
        {
            int x=names[i].length();
            if(x>p)
            {
                p=x;
                ans=names[i];
            }
        }
        return ans;
    }

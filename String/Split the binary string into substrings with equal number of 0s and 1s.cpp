Problem Description: https://practice.geeksforgeeks.org/problems/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/1/
Time Complexity: o(n)
Space Complexity: o(1)
  
  int maxSubStr(string str){
        //Write your code here
        int cn=0,ans=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='0')
            {
                cn--;
            }
            else cn++;
            if(cn==0) ans++;
        }
        if(cn!=0) return -1;
        return ans;
    }

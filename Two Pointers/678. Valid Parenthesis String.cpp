Problem Description: https://leetcode.com/problems/valid-palindrome/submissions/
Time Complexity: o(n)
Space Complexity: o(1)
  
   bool ispalindrome(string &s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                cout<<i<<" "<<j;
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        int n=s.length();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=65 and s[i]<=65+25)
            {
                s[i]=s[i]+32;
            }
            else if(s[i]>=97 and s[i]<=97+25 or s[i]>=48 and s[i]<=48+9)
            {
                 s[i]=s[i];
            }
            else
            {
                s.erase(s.begin()+i);
                i--;
            }
        }
        cout<<s<<endl;
        if(ispalindrome(s,0,s.length()-1)) return true;
        
        return false;
        
    }

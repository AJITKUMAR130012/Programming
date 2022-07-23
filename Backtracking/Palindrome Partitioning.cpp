Problem Description: https://leetcode.com/problems/palindrome-partitioning/
Time Complexity: o(n*2^n)
Space Complexity: o(n)
  
    bool palindrom(string s)
    {
        int l=0,r=s.length()-1;
        while(l<=r)
        {
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    
    void fun(string s,vector<vector<string>> &ans,vector<string> &out)
    {
        if(s.length()==0)
        {
            ans.push_back(out);
            return;
        }
        for(int i=0;i<s.length();i++)
        {
            string s1=s.substr(0,i+1);
            string s2=s.substr(i+1);
            cout<<s1<<s2;
            if(palindrom(s1))
            {
                out.push_back(s1);
                fun(s2,ans,out);
                out.pop_back();
            }
        }
        return;
    }
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> ans;
        vector<string> out;
        fun(s,ans,out);
        return ans;
    }

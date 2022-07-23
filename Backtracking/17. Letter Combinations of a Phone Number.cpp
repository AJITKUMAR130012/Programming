Problem Description: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
Time Complexity: o(2^n)
Space Complexity: o(n)

class Solution {
public:
    void fun(int id,map<char,string> &m,string &s,string out,vector<string> &ans)
    {
        if(id==s.length())
        {
            ans.push_back(out);
            return;
        }
        string l=m[s[id]];
        for(int i=0;i<l.length();i++)
        {
            string op=out;
            op.push_back(l[i]);
            fun(id+1,m,s,op,ans);
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char,string> m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        
        vector<string> ans;
        if(digits.length()==0) return ans;
        fun(0,m,digits,"",ans);
        return ans;
        
    }
};

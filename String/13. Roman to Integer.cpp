Problem Description: https://leetcode.com/problems/roman-to-integer/
Time Complexity: o(nlogn)
Space Complexity: O(1)
  
  class Solution {
public:
    int romanToInt(string s) {
        map<string,int> m;
        m["I"]=1;
        m["IV"]=4;
        m["V"]=5;
        m["IX"]=9;
        m["X"]=10;
        m["XL"]=40;
        m["L"]=50;
        m["XC"]=90;
        m["C"]=100;
        m["CD"]=400;
        m["D"]=500;
        m["CM"]=900;
        m["M"]=1000;
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;)
        {
            string l=s.substr(i,1);
            string t;
            if(i+1<n)
               t=s.substr(i,2);
            
            if(m.find(t)!=m.end())
            {
                ans+=m[t];
                cout<<t<<" ";
                i=i+2;
            }
            else
            {
                ans+=m[l];
                cout<<l<<" ";
                i=i+1;
            }
        }
       return ans; 
    }
};

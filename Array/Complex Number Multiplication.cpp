Problem Description: https://leetcode.com/problems/complex-number-multiplication/
Time Complexity: o(n)  // to find the position of "+" and to find the substring
Space Complexity: o(n)  // for the answer
  
  
      string complexNumberMultiply(string num1, string num2) {
        int pos1=num1.find("+");
        
        string num1_s1=num1.substr(0,pos1);
        string num1_s2=num1.substr(pos1+1);
        int pos2=num2.find("+");
        string num2_s1=num2.substr(0,pos2);
        string num2_s2=num2.substr(pos2+1);
        int a,b,c,d;
        a=stoi(num1_s1);
        
        c=stoi(num2_s1);
        num1_s2.erase(num1_s2.begin()+num1_s2.length()-1);
        num2_s2.erase(num2_s2.begin()+num2_s2.length()-1);
        b=stoi(num1_s2);
        d=stoi(num2_s2);
        int x=a*c-b*d;
        int y=a*d+b*c;
        string ans="";
        ans+=to_string(x);
        ans+="+";
        ans+=to_string(y);
        ans+="i";
        return ans;
        
        
    }
  
  

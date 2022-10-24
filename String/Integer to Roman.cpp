Problem Description: https://leetcode.com/problems/integer-to-roman/
Time Complexity: o(1)
Space Complexity: o(1)
  
  
class Solution {
public:
    string intToRoman(int n) {
        string ans="";
       while(1)
       {
           if(n>=1000)
           {
               int x=n/1000;
               cout<<x<<endl;
               while(x--)
               {
                   ans+="M";
               }
               
               n%=1000;
           }
            if(n>=900)
           {
               int x=n/900;
               while(x--)
               {
                   ans+="CM";
               }
                n%=900;
           }
            if(n>=500)
           {
               int x=n/500;
               while(x--)
               {
                   ans+="D";
               }
                n%=500;
           }
            if(n>=400)
           {
               int x=n/400;
               while(x--)
               {
                   ans+="CD";
               }
                n%=400;
                
           }
            if(n>=100)
           {
               int x=n/100;
               while(x--)
               {
                   ans+="C";
               }
                n%=100;
           }
            if(n>=90)
           {
               int x=n/90;
               while(x--)
               {
                   ans+="XC";
               }
                n%=90;
           }
            if(n>=50)
           {
               int x=n/50;
               while(x--)
               {
                   ans+="L";
               }
                n%=50;
           }
              if(n>=40)
           {
               int x=n/40;
               while(x--)
               {
                   ans+="XL";
               }
                n%=40;
           }
                if(n>=10)
           {
               int x=n/10;
               while(x--)
               {
                   ans+="X";
               }
                n%=10;
           }
                if(n>=9)
           {
               int x=n/9;
               while(x--)
               {
                   ans+="IX";
               }
                n%=9;
           }
                if(n>=5)
           {
               int x=n/5;
               while(x--)
               {
                   ans+="V";
               }
                n%=5;
           }
                if(n>=4)
           {
               int x=n/4;
               while(x--)
               {
                   ans+="IV";
               }
                n%=4;
           }
           if(n<4)
           {
               while(n--)
               {
                   ans+="I";
               }
               break;
           }
                             

       }
        return ans;
    }
};

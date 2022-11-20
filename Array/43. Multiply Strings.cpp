Problem Description: https://leetcode.com/problems/multiply-strings/
Time Complexity: O(n1*n2)    // to traverse oer the both string to multiply them
Space Complexity: o(n1+n2)   // to store the element
  
  
  string multiply(string num1, string num2) {
        int n1=num1.length();
        int n2=num2.length();
        string ans="";
        for(int i=0;i<n1+n2;i++)
        {
            ans+="0";
        }
        int c=0;
        for(int i=n2-1;i>=0;i--)
        {
            int j=n1-1;
            for(;j>=0;j--)
            {
                int x=(num1[j]-48)*(num2[i]-48)+c+(ans[i+j+1]-48);
                c=x/10;
                x=x%10;
                ans[i+j+1]=x+48;
            }
            while(c!=0)
            {
                int x=ans[i+j+1]-48+c;
                c=x/10;
                x=x%10;
                ans[i+j+1]=x+48;
                j--;
            }
        }
      
        for(int i=0;i<ans.length();i++)
        {
            if(ans[i]=='0' and i!=ans.length()-1)
            {
                ans.erase(ans.begin());
                i--;
            }
            else
            {
                break;
            }
        }
            
        return ans;
        
    }

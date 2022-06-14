Problem Description: https://leetcode.com/problems/plus-one/
Time Complexity: o(n)   // number of element in digits vector
Space Complexity: o(1)
  
  vector<int> plusOne(vector<int>& digits) {
        int c,val;
         int n=digits.size();
       if(n==1 and digits[n-1]==9)
        {
            vector<int> ans;
            ans.push_back(1);
            ans.push_back(0);
            return ans;
        }
       
        val=(digits[n-1]+1);
        digits[n-1]=val%10;
        c=val/10;
        int k=n-2;
        if(k>=0)
        {
        while(c)
        {
            
           digits[k]+=1;
           c=digits[k]/10;
           digits[k]=digits[k]%10;
           
            k--;
            if(k==-1 and c)
            {
                digits.push_back(c);
                for(int i=n-1;i>=0;i--)
                {
                    digits[i+1]=digits[i];
                }
                digits[0]=1;
                break;
            }
        }
        }
        return digits;
        
    }

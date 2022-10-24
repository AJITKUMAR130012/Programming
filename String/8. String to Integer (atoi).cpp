Problem Description: https://leetcode.com/problems/string-to-integer-atoi/
Time complexity: o(n+m)   m=length of vector, n=length of string
Space Complexity: o(m)
  
  
   int myAtoi(string s) {
        int i=0;
        int n=s.length();
        for(;i<n;i++)
        {
            if(s[i]==' ') continue;
            if(s[i]=='-' or s[i]=='+' or (s[i]>=48 and s[i]<=57)) break; 
            if((s[i]<48 or s[i]>57)) return 0; 
        }
        long long ans=0;
        int j=i;
        bool pos=true;
        if(s[i]=='-')
        {
            pos=false;
        }
        vector<int> v;
        if(s[i]=='-' or s[i]=='+') i++;
        for(int l=i;l<n;l++)
        {
            if(s[l]<48 or s[l]>57) break;
            
            
            v.push_back(s[l]-48);
            
        }
 
        for(int i=0;i<v.size();i++)
        {
            if(pos and ans>2147483647)
            {
                ans=2147483647;
                return ans;
            }
            if(!pos and ans>2147483648)
            {
                ans=-2147483648;
                return ans;
            }
            ans=ans*10;
            ans+=v[i];
            cout<<ans<<" ";
            if(pos and ans>2147483647)
            {
                ans=2147483647;
                return ans;
            }
            if(!pos and ans>2147483648)
            {
                ans=-2147483648;
                return ans;
            }
        }
        if(!pos)
        {
            ans=-ans;
        }
      
        return ans;
            
    }

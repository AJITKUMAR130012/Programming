Problem Description: https://practice.geeksforgeeks.org/problems/8c8f95810b05b4cab665f2997d36991bd58308a2/1/?page=1&difficulty[]=1&status[]=solved&status[]=unsolved&category[]=Stack&sortBy=submissions#
Time Complexity: o(n*k) 
Space Complexity: o(n)

string Reduced_String(int k,string s){
        // Your code goes here
        stack<pair<int,int>> p;
        int l=0;
        int n=s.length();
        string ans="";
        if(k==1) return ans;
        for(int i=0;i<n;i++)
        {
            if(p.size()==0)
            {
                p.push({s[i],1});
            }
            else if(p.top().first==s[i])
            {
                p.push({s[i],p.top().second+1});
                if(p.top().second==k)
                {
                    l=k;
                    while(l--) p.pop();
                }
            }
            else 
            {
                p.push({s[i],1});
            }
        }
        
        while(p.size()!=0)
        {
            ans+=string(1,p.top().first);
            p.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

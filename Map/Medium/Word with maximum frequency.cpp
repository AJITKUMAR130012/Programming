Problem Statement: https://practice.geeksforgeeks.org/problems/word-with-maximum-frequency0120/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Map&sortBy=submissions#
Time Complexity: o(nlogn)
Space Complexity: o(number of distinict word in string)
  
  
  string maximumFrequency(string s){
        // Complete the function
        map<string,pair<int,int>> m;
        int i=0,j=0;
        int n=s.length();
        // making word cont and its index in map
        while(j<n)
        {
            if(j==n-1)
            {
                string p=s.substr(i,j-i+1);
                if(m.find(p)==m.end())
                {
                    m.insert({p,{i,1}});
                }
                else
                {
                    m[p]={m[p].first,m[p].second+1};
                }
                j++;
            }
            else if(s[j]==' ')
            {
                string p=s.substr(i,j-i);
                if(m.find(p)==m.end())
                {
                    m.insert({p,{i,1}});
                }
                else
                {
                    m[p]={m[p].first,m[p].second+1};
                }
                j++;
                i=j;
            }
            else 
            {
                j++;
            }
        }
        string ans="";
        int val=-1,index;
        // iterating over the map to calculate the answer
        for(auto c:m)
        {
            if(c.second.second>val)
            {
                val=c.second.second;
                ans=c.first;
                index=c.second.first;
                
            }
            else if(c.second.second==val)
            {
                if(c.second.first<index)
                {
                    ans=c.first;
                    index=c.second.first;
                }
            }
        }
        ans+=" ";
        ans+=to_string(val);
        return ans;
}

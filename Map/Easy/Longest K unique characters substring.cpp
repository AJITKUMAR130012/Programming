Problem Description:https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1/?page=1&difficulty[]=0&category[]=Map&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(k)  --> size of map
  
   int longestKSubstr(string s, int k) {
    // your code here
    int i=0,j=0;
    int ans=-1;
    int n=s.length();
    map<char,int> m;
    while(j<n)
    {
        m[s[j]]++;
        if(m.size()<k) j++;
        else if(m.size()==k)
        {
           ans=max(ans,j-i+1);
           j++;
            
        }
        else if(m.size()>k)
        {
            while( m.size()>k )
            {
                m[s[i]]--;
                if(m[s[i]]==0 )
                {
                    m.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    return ans;
    }

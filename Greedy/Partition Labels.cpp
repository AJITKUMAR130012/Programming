Problem Description: https://leetcode.com/problems/partition-labels/
Time Complexity: o(n)    // time taken to traverse the string and to insert into the map
Space Complexity: o(n)   // space taken by map
  
  
  vector<int> partitionLabels(string s) {
        map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]=i;
        }
        vector<int> ans;
        int prev=-1,index=INT_MIN;
        for(int i=0;i<s.length();i++)
        {
            index=max(index,m[s[i]]);
            if(i==index)
            {
                ans.push_back(i-prev);
                prev=i;
            }
        }
        return ans;
        
    }

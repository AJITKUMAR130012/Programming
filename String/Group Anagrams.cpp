Problem Description: https://leetcode.com/problems/group-anagrams/
Time Complexity: O(n*m)    //n is the length of the vector of string and m is the length of each string.
Space Complexity: o(n+m)

 vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> mp;
        for( auto c: strs)
        {
            map<char,int> m;
            for(int i=0;i<c.length();i++)
            {
                
                m[c[i]]++;
            }
            if(mp.find(m)==mp.end())
            {
                vector<string> l;
                l.push_back(c);
                mp.insert({m,l});
            }
            else
            {
                mp[m].push_back(c);
            }
            
        }
        
        vector<vector<string>> ans;
        for(auto c:mp)
        {
            ans.push_back(c.second);
        }
        return ans;
        
    }

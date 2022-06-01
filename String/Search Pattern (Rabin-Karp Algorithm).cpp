Problem Description: https://practice.geeksforgeeks.org/problems/31272eef104840f7430ad9fd1d43b434a4b9596b/1/#
Time Complexity: o(nlogn) where n is the length of text
Spce Complexity: o(n-m) where m is the size of pattern

 vector <int> search(string pat, string txt)
        {
            //code here.
            vector<int> ans;
            int m=pat.length();
            int n=txt.length();
            map<pair<string,int>,int> mp;
            int i=0,j=0;
            while(j<n)
            {
                if(j-i+1<m)
                {
                    j++;
                }
                else if(j-i+1==m)
                {
                    string s=txt.substr(i,m);
                    mp[{s,i}]=i;
                    j++;
                    i++;
                }
            }
            for( auto c:mp)
            {
                if(c.first.first==pat)
                {
                    ans.push_back(c.first.second+1);
                }
            }
            if(ans.size()==0) ans.push_back(-1);
            return ans;
        }

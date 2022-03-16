//https://leetcode.com/problems/find-center-of-star-graph/

 int findCenter(vector<vector<int>>& edges) {
        map<int,int> m;
        for(int i=0;i<edges.size();i++)
        {
           m[edges[i][0]]++;
           m[edges[i][1]]++;
        }
        
    
    for(auto c:m)
        if(c.second==edges.size())
            return c.first;
    return 0;
    }

problem Description: https://leetcode.com/problems/course-schedule-ii/
Time Complexity: o(v+e)
Space Complexity: o(v)    ---space taken by visited array and terminal array and space taken by dfs function

class Solution {
public:
    
    bool dfs(int i,vector<vector<int>>& graph,vector<bool> &terminal,vector<bool> &visited)
    {
        visited[i]=true;
        terminal[i]=true;
        for( auto c: graph[i])
        {
            if(terminal[c] and visited[c]) return true;
            if(!visited[c])
            {
                if(dfs(c,graph,terminal,visited)) return true;
            }
        }
        terminal[i]=false;
        return false;
    }
    
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool> terminal(n,false); 
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            vector<bool> visited(n,false);
            bool x=dfs(i,graph,terminal,visited);
            if(!x) ans.push_back(i);
        }
        return ans;
    }
};

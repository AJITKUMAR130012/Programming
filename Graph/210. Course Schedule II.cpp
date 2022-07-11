Problem description: https://leetcode.com/problems/course-schedule-ii/
Time Complexity: o(v+e)
Space Complexity: o(v+e)   ---> to make adjacency list

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=prerequisites.size();
        vector<int> adj[numCourses];
        for(int i=0;i<n;i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
      
        vector<int> in(numCourses,0);
        for(int i=0;i<n;i++)
        {
           in[prerequisites[i][0]]++;
        }
        int cn=0;
        queue<int> q;
      
        for(int i=0;i<numCourses;i++)
        {
            cout<<in[i]<<" ";
        }
      
        for(int i=0;i<numCourses;i++)
        {
          
            if(in[i]==0) q.push(i);
          
        }
        vector<int> ans;
        while(q.size()!=0)
        {
            cn++;
            int x=q.front();
            q.pop();
            ans.push_back(x);
            for( auto c: adj[x])
            {
                in[c]--;
                if(in[c]==0) q.push(c);
            }
        }
        if(cn!=numCourses)
        {
            ans.clear(); return ans;
        }
        return ans;
    }
};

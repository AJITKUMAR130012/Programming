Problem Description: https://practice.geeksforgeeks.org/problems/snake-and-ladder-problem4816/1
Time Coplexity: O(v+e)
Space Complexity: o(v+e)

class Solution{
public:
    void bfs(int i,vector<int> adj[],vector<int> &dis)
    {
        queue<int> q;
        q.push(i);
        while(q.size()!=0)
        {
            int x=q.front();
            q.pop();
            for( auto c: adj[x])
            {
                if(dis[c]>dis[x]+1)
                {
                    dis[c]=dis[x]+1;
                    q.push(c);
                }
            }
        }
        
    }
    int minThrow(int N, int arr[]){
        // code here
        map<int,int> m;
        for(int i=0;i<2*N;i=i+2)
        {
            m[arr[i]]=arr[i+1]-arr[i];
        }
     
        vector<int> adj[31];
        for(int i=1;i<=30;i++)
        {
            for(int j=i+1;j<=i+6 and j<=30;j++)
            {
                int p=j;
                p+=m[j];
                if(p<=30) adj[i].push_back(p);
            }
        }
        vector<int> dis(31,INT_MAX);
        dis[1]=0;
        bfs(1,adj,dis);
        return dis[30];
    }
};

Problem Description: https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1/?page=1&difficulty[]=1&category[]=Heap&sortBy=submissions
Time Complexity: o(nlogn)
Space COmplexity: o(n)
  
   public:
    //Function to merge k sorted arrays.
    class cmp{
        public:
        bool operator()(const pair<int,pair<int,int>> &a,const pair<int,pair<int,int>> &b)
        {
            return a.first>b.first;
        }
    };
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,cmp> q;
        for(int i=0;i<K;i++)
        {
            q.push({arr[i][0],{i,0}});
        }
         vector<int> ans;
        while(q.size()!=0)
        {
            int x=q.top().first;
            int y=q.top().second.first;
            int z=q.top().second.second;
            ans.push_back(x);
            if(z<K-1)
            {
                q.push({arr[y][z+1],{y,z+1}});
            }
            q.pop();
        }
       
        return ans;
    }

Problem Description: https://leetcode.com/problems/top-k-frequent-elements/
Time Complexity: o(nlong)
Space Complexity: o(n)
  
  // here we make own comparator function to implement priority queue
 // this function is used to make minimum priority queue on second element of pair 
   class cmp
    {
        public:
        bool operator()(pair<int,int> a,pair<int,int> b)
        {
            return a.second>b.second;
        }
        
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> q;
        for( auto c:m)
        {
            q.push({c.first,c.second});
            if(q.size()>k)
            {
                q.pop();
            }
        }
        vector<int> ans;
        while(q.size()!=0)
        {
            ans.push_back(q.top().first);
            q.pop();
        }
        return ans;
        
    }

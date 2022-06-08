Problem Description: https://leetcode.com/problems/top-k-frequent-elements/
Time Complexity: o(nlog(k))
Space Complexity: o(n)   // Space Taken by heap and priority_queue
  
  
   class cmp{
        public:
        bool operator()(pair<int,int> &a,pair<int,int> &b)
        {
            return a.second>b.second;
        }
        
    };
   
    vector<int> topKFrequent(vector<int>& nums, int k) {
       priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> q;
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for( auto c: m)
        {
            q.push({c.first,c.second});
            if(q.size()>k)
            {
                q.pop();
            }
        }
        vector<int> ans;
        while(!q.empty())
        {
            ans.push_back(q.top().first);
            q.pop();
        }
        return ans;
        
        
    }


Problem description: https://leetcode.com/problems/top-k-frequent-elements/
Time complexity: o(nlogn)
Space Complexity:o(n)   size of map and k size of priority queue

// here inbuilt function is used to impelement priority queue

vector<int> topKFrequent(vector<int>& v, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        int n=v.size();
        map<int,int> m;
        for(int i=0;i<n;i++ )
        {
            m[v[i]]++;
        }
        for(auto c: m)
        {
            q.push({c.second,c.first});
            if(q.size()>k) q.pop();
        }
        vector<int> ans;
        while(!q.empty())
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }

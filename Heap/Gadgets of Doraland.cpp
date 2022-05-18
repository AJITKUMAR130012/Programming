Problem Description:https://practice.geeksforgeeks.org/problems/bbd15e2da95880979ce65acc7360e2c5681664e65520/1/?page=1&difficulty[]=0&category[]=Heap&sortBy=submissions#
Time Complexity: o(nlogn)
Space Complexity:o(n)
  
   class cmp{
       public:
    bool operator()(pair<int,int> &a,pair<int,int> &b)
    {
        if(a.first==b.first) return a.second<b.second;
        return a.first<b.first;
    }
   };

    vector<int> TopK(vector<int>& arr, int k)
    {
        // code here
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> q;
        for(auto c:m)
        {
            q.push({c.second,c.first});
        }
    
        vector<int> ans;
        while(k--)
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        
       // reverse(ans.begin(),ans.end());
        return ans;
    }

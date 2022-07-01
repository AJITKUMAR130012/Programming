Problem Description: https://leetcode.com/problems/k-closest-points-to-origin/
Time Complexity: o(nlogn)
Space Complexity: o(k)
  
  class Solution {
public:
    double distance(long long x,long long y)
    {
        return sqrt(x*x+y*y);
    }
    class cmp
    {
        public:
        bool operator()(pair<int,double> &p,pair<int,double> &q)
        {
            return p.second<q.second;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,double>,vector<pair<int,double>>,cmp> q;
        for(int i=0;i<points.size();i++)
        {
            double d=distance(points[i][0],points[i][1]);
            q.push({i,d});
            if(q.size()>k) q.pop();
        }
        vector<vector<int>> ans;
        while(q.size()!=0)
        {
           ans.push_back(points[q.top().first]);
            q.pop();
        }
        return ans;
    }
};

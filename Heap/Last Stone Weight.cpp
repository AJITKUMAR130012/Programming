Problem Statement: https://leetcode.com/problems/last-stone-weight/
Time Complexity: o(nlogn)
Space Complexity: o(n)
  
  
  class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i=0;i<stones.size();i++) q.push(stones[i]);
        while(q.size()!=1)
        {
            int x=q.top();
            q.pop();
            int y=q.top();
            q.pop();
            if(x==y and q.size()!=0) continue;
            if(x==y and q.size()!=0) return 0;
            else q.push(x-y);
        }
        return q.top();
    }
};

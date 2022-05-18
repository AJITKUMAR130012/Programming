Problem Description: https://practice.geeksforgeeks.org/problems/game-with-string4100/1/?page=1&difficulty[]=0&category[]=Heap&sortBy=submissions#
Time Complexity: o(nlogn)
Space Complexity: o(n) --> if all character are different

int minValue(string s, int k){
        // code here
        map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        priority_queue<int> q;
        for(auto c:m)
        {
    //        cout<<c.first<<" "<<c.second<<endl;
            q.push(c.second);
        }
        while(k--)
        {
            
            int x=q.top();
      //      cout<<"x="<<x<<" ";
            q.pop();
            q.push(x-1);
        }
        int ans=0;
        while(q.size()!=0)
        {
            ans+=pow(q.top(),2);
            q.pop();
        }
        return ans;
    }
  

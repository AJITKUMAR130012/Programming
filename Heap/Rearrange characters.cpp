Pronlem Statement: https://practice.geeksforgeeks.org/problems/rearrange-characters4649/1/?page=1&difficulty[]=1&category[]=Heap&sortBy=submissions#
Time Complexity: o(nlogn)
Space Complexity: 0(1)
  
  class cmp{
        public:
        bool operator()(pair<char,int> a,pair<char,int> b)
        {
            return a.second<b.second;
        }
        
    };
    
    string rearrangeString(string &str)
    {
        //code here
        priority_queue<pair<char,int>,vector<pair<char,int>>,cmp> q;
        map<char,int> m;
        int n=str.length();
        for(int i=0;i<n;i++)
        {
            m[str[i]]++;
        }
        for( auto c: m)
        {
            q.push({c.first,c.second});
        }
      /*  while(q.size()!=0)
        {
            cout<<q.top().first<<" "<<q.top().second<<endl;
            q.pop();
        }
        */
        string ans="";
        while(q.size()!=0)
        {
            if(q.size()>1)
            {
                pair<char,int> x=q.top();
                q.pop();
                char l=x.first;
                int m=x.second;
                ans+=string(1,l);
                pair<char,int> y=q.top();
                char n=y.first;
                int o=y.second;
                ans+=string(1,n);
                q.pop();
                m--;
                o--;
                if(m>0)
                {
                    q.push({l,m});
                }
                if(o>0)
                {
                    q.push({n,o});
                }
            }
            else
            {
                
                     pair<char,int> t=q.top();
                     char h=t.first;
                     int j=t.second;
                     q.pop();
                     if(j>1) return "-1";
                     for(int i=0;i<j;i++)
                     {
                         ans+=string(1,h);
                     }
            }
                
        }
    //    cout<<ans<<endl;
        return ans;
    }
  
  

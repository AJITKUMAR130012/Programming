Problem Statement: https://practice.geeksforgeeks.org/problems/frequency-game/1/?page=1&difficulty[]=0&category[]=Map&sortBy=submissions#
Time Complexity: o(nlogn)
Space complexity: o(n)


 void SortedDuplicates(int n, vector<int> &arr) {
        // code here
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        vector<int> ans;
        for( auto c:m)
        {
            if(c.second>1)
            {
                ans.push_back(c.first);
            }
        }
        sort(ans.begin(),ans.end());
        for ( auto c:ans)
        {
            cout<<c<<" ";
        }
        if(ans.size()==0)
        {
            cout<<"-1"<<endl;
            return;
        }
        cout<<endl;
        ans.clear();
    }

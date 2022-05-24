Problem Description: https://practice.geeksforgeeks.org/problems/maximize-the-array3340/1/?page=1&difficulty[]=1&category[]=Heap&sortBy=submissions#
Time Complexity: o(nlogn)
Space Complexity: o(n)

vector<int> maximizeArray(int arr1[], int arr2[], int n) {
            // code here 
            priority_queue<int,vector<int>,greater<int>> t;
           map<int,int> m;
            for(int i=0;i<n;i++)
            {
                if(m.find(arr1[i])==m.end())
                {
                    m[arr1[i]]++;
                    t.push(arr1[i]);
                    if(t.size()>n) t.pop();
                }
                if(m.find(arr2[i])==m.end())
                {
                    m[arr2[i]]++;
                    t.push(arr2[i]);
                    if(t.size()>n) t.pop();
                }
                
            }
            map<int,int> l;
            while(t.size()!=0)
            {
          //      cout<<t.top()<<" ";
                l[t.top()]++;
                t.pop();
                
            }
            vector<int> ans;
            for(int i=0;i<n;i++)
            {
                if(l.find(arr2[i])!=l.end() and l[arr2[i]]!=0)
                {
                    ans.push_back(arr2[i]);
                    l[arr2[i]]=0;
                }
            }
            for(int j=0;j<n;j++)https://practice.geeksforgeeks.org/problems/maximize-the-array3340/1/?page=1&difficulty[]=1&category[]=Heap&sortBy=submissions#
            {
                if(l.find(arr1[j])!=l.end() and l[arr1[j]]!=0)
                {
                    ans.push_back(arr1[j]);
                    l[arr1[j]]=0;
                }
            }
          //  cout<<endl;
            return ans;
    }

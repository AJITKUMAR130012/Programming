Problem Statement: https://practice.geeksforgeeks.org/problems/k-sorted-array1610/1#
Time Complexity: o(nlogn)
Space Complexity: o(n)--> space taken by map which is use to store the index

string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
       bool flag=false;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]=i;
        }
     /*   for(auto c:m)
        {
            cout<<c.first<<" "<<c.second<<endl;
        }
        */
        
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]==i)
            {
                
            }
            else if(m[arr[i]]>i)
            {
                if(m[arr[i]]>i+k)
                {
                    return "No";
                }
            }
            else if(m[arr[i]]<i)
            {
                if(m[arr[i]]<i-k)
                {
                    return "No";
                }
           
            }
        }
        return "Yes";
    }

Problem Description: https://practice.geeksforgeeks.org/problems/1df2447c003940512562d766cf0583bbdc7a75ed/1/?page=1&difficulty[]=2&category[]=Map&sortBy=submissions#
Time complexity: o(n^2)    where n is length digit of number
Space Complexity: o(N)     N is the number of element in Number array

long long countPairs(int N, int X, vector<int> numbers){
        // code here
        map<string,int> m;
        for(int i=0;i<N;i++)
        {
            m[to_string(numbers[i])]++;
        }
        // for(auto c:m){
        //     cout<<c.first<<" "<<c.second<<endl;        }
        int ans=0;
        string s=to_string(X);
        int n=s.length();
        for(int i=1;i<n;i++)
        {
            string x=s.substr(0,i);
            string y=s.substr(i,n-i);
            // int p=stoi(x);
            // int q=stoi(y);
        //    cout<<p<<" "<<q<<endl;
            if(x!=y)
            {
            ans+=(m[x]*m[y]);
            }
            else{
                ans+=(m[x]*(m[y]-1));
            }
        }
        
        return ans;
    }

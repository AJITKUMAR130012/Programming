Problem Description: https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1/?page=1&difficulty[]=1&category[]=Stack&sortBy=submissions
Time Complexity: o(n)
Space Complexity: o(n) ---> space taken by stack
Approach--> Nearest greater element to left of an element

 vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
        stack<pair<int,int>> s;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(s.size()==0)
            {
                v.push_back(i+1);
            }
            else if(s.size()!=0 and s.top().first>price[i])
            {
              v.push_back(i-s.top().second);
            }
            else if(s.size()!=0 and s.top().first<=price[i])
            {
                while(s.size()!=0 and s.top().first<=price[i])
                {
                    s.pop();
                }
                if(s.size()==0) v.push_back(i-(-1));
                else v.push_back(i-s.top().second);
            }
            s.push({price[i],i});
        }
        
       
        return v;
    }

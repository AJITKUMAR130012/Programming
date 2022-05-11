Problem Description: https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1/?page=1&difficulty[]=1&status[]=solved&status[]=unsolved&category[]=Stack&sortBy=submissions
Time Complexity: o(n)    --> time taken to traverse the string
Space Complexity: o(n)   --> space taken by stack

stack<char> p;
    int n=s.length();
    if(n&1) return -1;
    int opening=0,closing =0;
    for(int i=0;i<n;i++)
    {
        if(p.size()==0)
        {
            p.push(s[i]);
            if(s[i]=='{') opening++;
            else          closing++;
            
        }
        else if(s[i]=='{')
        {
            opening++;
            p.push(s[i]);
        }
        else if( s[i]=='}')
        {
            if(p.top()=='{')
            {
                p.pop();
                opening--;
            }
            else 
            {
                closing++;
            }
        }
    }
//cout<<opening<<" "<<closing<<endl;
    int ans=0;
    if(opening&1) ans+=(opening/2)+1;
    else          ans+=(opening/2);
    if(closing&1) ans+=(closing/2)+1;
    else          ans+=(closing/2);
    return ans;

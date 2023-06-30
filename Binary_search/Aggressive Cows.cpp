class Solution {
public:



    bool possible(vector<int> &stalls, int n, int c, int min_dis)
    {
        int cn=1, last_cow=stalls[0];
        for(int i=0;i<n;i++)
        {
            if(stalls[i]-last_cow>=min_dis)
            {
                last_cow=stalls[i];
                cn++;
                if(cn==c) return true;
            }
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(), stalls.end());
        int s=0, e=stalls[n-1]-stalls[0];
        int ans=0;
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(possible(stalls, n, k,m))
            {
                ans=m;
                s=m+1;
            }
            else
            {
                e=m-1;
            }
        }
        return ans;
    }
};

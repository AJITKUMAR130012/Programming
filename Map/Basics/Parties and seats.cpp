Problem Statement: https://practice.geeksforgeeks.org/problems/parties-and-seats/1/?page=1&difficulty[]=-1&category[]=Map&sortBy=submissions#
Time complexity: o(nlogn)  -->each insertion of element taken o(logn) so we are doing n such operation
Space Complexity: o(n) --> space taken by map

void Election2019(char party[], int seats[], int n)
{
    //Your code here
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[party[i]]=seats[i];
    }
    int ans=INT_MIN;
    for(auto c:mp)
    {
        cout<<c.first<<" "<<c.second<<endl;
        if(c.second>ans) ans=c.second;
    }
    cout<<ans<<endl;
    mp.clear();
    return;
}

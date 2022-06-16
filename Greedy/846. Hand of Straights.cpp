Problem Statement:https://leetcode.com/problems/hand-of-straights/
Time Complexity: o(k*g*logn(n))    // k=(n/g) where n is number of size of hands and g is groupsize and log(n) time is taken to find the element present in the map or not
Space Complexity: o(n)   // space taken by map
  
  bool isNStraightHand(vector<int>& hand, int g) {
        int n=hand.size();
        if(n%g!=0) return false;
        map<int,int> mp;
        for(int i=0;i<n;i++) mp[hand[i]]++;
        auto it=mp.begin();
        int k=n/g;
        for(int i=0;i<k;i++)
        {
            it=mp.begin();
            int x=it->first;
        
            for(int p=x;p<=x+g-1;p++)
            {
                cout<<p<<" ";
                if(mp.find(p)==mp.end()) return false;
                mp[p]--;
                if(mp[p]==0)
                {
                    mp.erase(p);
                }
            }
        }
        return true;
    }

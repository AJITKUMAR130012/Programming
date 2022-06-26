Problem Description: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
Time Complexity: o(n)
Space Complexity: o(1)
  
  class Solution {
public:
    long long power(long long a,long long b)
    {
        long long ans=1, p;
        while(b)
        {
            if(b&1)
            {
                ans=ans*a;
            }
            p=a*a;
            a=p;
            b=b>>1;
        }
        return ans;
    }
    int getDecimalValue(ListNode* head) {
     int n=0,ans=0;
        ListNode *l1=head;
        while(l1)
        {
            n++;
            l1=l1->next;
        }
        l1=head;
        while(l1)
        {
            if(l1->val==1)
            {
            ans+=power(2,n-1);
            }
            n--;
            l1=l1->next;
        }
        
       return ans; 
    }
};

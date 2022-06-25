Problem Description: https://leetcode.com/problems/add-two-numbers/
Time Complexity: o(n) ---> where n is the length of greater size list between two list
Space Complexity: o(1)
  
  class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1=0,n2=0;
        ListNode *t1=l1,*t2=l2;
        while(t1)
        {
            n1++;
            t1=t1->next;
        }
        while(t2)
        {
            n2++;
            t2=t2->next;
        }
        cout<<n1<<" "<<n2<<" ";
       
        if(n1>n2)
        {
            ListNode *prev;
            t1=l1,t2=l2;
            int rem=0,c=0;
            while(t2)
            {
                int x=t1->val+t2->val+c;
                c=x/10;
                rem=x%10;
                t1->val=rem;
                t2=t2->next;
                t1=t1->next;
            }
            while(c and t1)
            {
                int x=c+t1->val;
                c=x/10;
                rem=x%10;
                t1->val=rem;
                prev=t1;
                t1=t1->next;
            }
            if(c)
            {
                ListNode *temp=new ListNode(c);
                prev->next=temp;
            }
            return l1;
        }
        else if(n1<n2)
        {
            ListNode *prev;
            t1=l1,t2=l2;
            int rem=0,c=0;
            while(t1)
            {
                int x=t1->val+t2->val+c;
                c=x/10;
                rem=x%10;
                t2->val=rem;
                t2=t2->next;
                t1=t1->next;
            }
             while(c and t2)
            {
                int x=c+t2->val;
                c=x/10;
                rem=x%10;
                t2->val=rem;
                prev=t2;
                t2=t2->next;
            }
            if(c)
            {
                ListNode *temp=new ListNode(c);
                prev->next=temp;
            }
            return l2;
        }
        else if(n1==n2)
        {
            t1=l1,t2=l2;
            ListNode *prev=NULL;
            int rem=0,c=0;
            while(t1)
            {
                int x=t1->val+t2->val+c;
                c=x/10;
                rem=x%10;
                cout<<" "<<rem<<" ";
                t1->val=rem;
                prev=t1;
                t2=t2->next;
                t1=t1->next;
            }
            if(c)
            {
                ListNode *temp=new ListNode(c);
                prev->next=temp;
            } 
            return l1;
        }
       return l1; 
    }
};
 

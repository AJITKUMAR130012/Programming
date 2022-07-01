Problem Description: https://leetcode.com/problems/reverse-nodes-in-k-group/
Time Complexity: o(n)
Space Complexity: o(n/k)   -->( Due to recursive call)
  
  class Solution {
public:
    void reverse(ListNode *h,ListNode *e)
    {
        ListNode *p=NULL,*c=h,*n=h->next;
        while(p!=e)
        {
            c->next=p;
            p=c;
            c=n;
            if(n) n=n->next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head or !head->next or k==1) return head;
        ListNode *h=head,*e=head;
        int o=k-1;
        while(o--)
        {
            e=e->next;
            if(!e) return head;
        }
        ListNode *nh=reverseKGroup(e->next,k);
        reverse(h,e);
        h->next=nh;
        return e;
        
    }
};
  

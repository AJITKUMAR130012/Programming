Problem Description: https://leetcode.com/problems/intersection-of-two-linked-lists/
Time Complexity: o(n+m)
Space Complexity: o(1)
  
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *h1=headA,*h2=headB;
        int cn=0;
        while(1)
        {
            if(h1==h2) return h1;
            if(cn>2) return NULL;
            h1=h1->next;
            if(!h1)
            {
                cn++;
                h1=headB;
            }
            h2=h2->next;
            if(!h2)
            {
                cn++;
                h2=headA;
            }
            
            
        }
        return NULL;
        
    }

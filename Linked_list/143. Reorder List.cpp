Problem Description: https://leetcode.com/problems/reorder-list/
Time Complexity: o(n) --> time taken to find the middle node and the time taken to reverse the second list and the merging them
Space Complexity: o(1)
  
  class Solution {
public:
    
    ListNode* merge(ListNode *head1,ListNode *head2)
    {
        ListNode *l1=head1,*l2=head2;
        while(l1 and l2)
        {
            ListNode *temp1=l1;
            ListNode *temp2=l2;
            l1=l1->next;
            l2=l2->next;
            temp1->next=temp2;
            temp2->next=l1;
        }
        return head1;
    }
    
    ListNode *reverse(ListNode *head)
    {
        if(!head or !head->next) return head;
        ListNode *curr,*prev,*forword;
        prev=head;
        curr=head->next;
        while(curr)
        {
            forword=curr->next;
            curr->next=prev;
            if(prev==head) prev->next=NULL;
            prev=curr;
            curr=forword;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        if(!head or !head->next) return;
        ListNode *fast=head->next,*slow=head;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *l1=head,*l2=slow->next;
        slow->next=NULL;
        l2=reverse(l2);
        l1=merge(l1,l2);
        head=l1;
        
    }
};
 

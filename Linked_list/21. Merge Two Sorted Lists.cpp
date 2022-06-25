Problem Description: https://leetcode.com/problems/merge-two-sorted-lists/
Time Complexity: o(n+m)
Space Complexity: o(1)
  
  
  class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode *prev=NULL,*head=list1;
        while(list1 and list2)
        {
            if(list1->val==list2->val)
            {
                ListNode *temp1,*temp2;
                temp1=list1;
                temp2=list2;
                list1=list1->next;
                list2=list2->next;
                temp1->next=temp2;
                temp2->next=list1;
                list1=temp2;
            }
            else if(list1->val<list2->val)
            {
                prev=list1;
                list1=list1->next;
            }
            else if(list1->val>list2->val)
            {
               ListNode *temp=list2;
                list2=list2->next;
                if(prev) prev->next=temp;
                temp->next=list1;list1=temp;
                if(list1->next==head) head=list1;
            }
        }
        if(!list1 and list2) prev->next=list2;
   
        return head;
        
    }
};

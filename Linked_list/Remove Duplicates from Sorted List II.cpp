Problem Description: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
Time Complexity: o(n)
Space Complexity: o(1)
  
  class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head or !head->next) return head;
        ListNode *dummy=new ListNode(-1);
        ListNode *temp=head;
        dummy->next=head;
        ListNode *bs=dummy;
        int k=INT_MIN;
        int cn=0;
        while(temp)
        {
            if(temp->next and temp->val==temp->next->val) k=temp->next->val;
                bool flag=false;
            while(temp and temp->val==k)
            {
            
                ListNode *pemp=temp;
                cout<<temp->val;
                temp=temp->next;
                if(cn==0) dummy->next=temp;
                bs->next=temp;
                cout<<"A"<<" ";
                
                flag=true;
                delete pemp;
            }
            cn++;
            if(!flag)
            {
                bs=temp;
                temp=temp->next;
            }
        }
        return dummy->next;
        
    }
};

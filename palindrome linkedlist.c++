
class Solution {
public:
   ListNode* reverselinkedlist(ListNode* head)
    {
        ListNode* prev=NULL;
       while(head)
       {
           ListNode*temp=head->next;
           head->next=prev;
           prev=head;
           head=temp;
       }
       return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            {
                    return 1;
            }
     ListNode* fast=head,*slow=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=reverselinkedlist(slow);
       while(slow)
       {
           if(head->val!=slow->val) return false;
           slow=slow->next;
           head=head->next;
       }
        return true;
    }
};
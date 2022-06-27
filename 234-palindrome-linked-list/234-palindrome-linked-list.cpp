/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr =head;
        ListNode* prev=NULL;
        
        while(curr != NULL)
        {
            ListNode* temp=curr->next;
            
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next ==NULL)
        {
            return true;
        }
        
        
        ListNode* s=head;
        ListNode* f=head;
        // int c=0;
        while(f->next != NULL && f->next->next != NULL)
        {
            s=s->next;
            f=f->next->next;
        }
        s->next=reverse(s->next);
        s=s->next;
        ListNode* dummy=head;
        while(s != NULL)
        {
            if(dummy->val != s->val)
            {
                return false;
            }
            dummy=dummy->next;
            s=s->next;
        }
        return true;
    }
};
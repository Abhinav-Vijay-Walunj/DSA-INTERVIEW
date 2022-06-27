/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow == fast)
            {
                return true;
            }
            
        }
        return false;
        
        /*
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        ListNode* temp=head;
        ListNode* fast=head;
        if(temp == NULL || temp->next == NULL)
            return false;
        while(fast->next != NULL && fast->next->next != NULL)
        {
            fast=fast->next;
            if(temp == fast)
            {
                return true;
            }
            temp=temp->next;
            fast=fast->next;
        }
        return false;*/
    }
};
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
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL)
        {
            return NULL;
        }
        ListNode* slow=head;
        ListNode *fast=head;
        ListNode *t=head;
        //vector<bool> v;
        while(fast->next !=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;//traverse the list until we didn't get cycle or we end up to null
            if(fast == slow)
            {
                while(slow != t)
                {
                    slow=slow->next;//when cycle is present then we start from head and we check if we get a slow and temp equal.
                    t=t->next;
                }
                return t;
            }
        }
        return NULL;
    }
};
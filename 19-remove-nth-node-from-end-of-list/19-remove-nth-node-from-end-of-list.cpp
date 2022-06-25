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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * start = new ListNode();
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
        /*
        ListNode* temp = head;
        ListNode* prev=NULL;
        int k=0;
        while(temp != NULL)
        {
            k++;
            temp=temp->next;
        }
        if(k<n)
        {
            return NULL;
        }
        temp=head;
        k=(k-n);
        while(k> 0)
        {
            k--;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        // free(temp->next);
        // prev=temp;
        // ListNode* curr = temp->next;
        // prev->next=curr->next;
        // free(curr);
        
        // ListNode* t=temp->next;
        // free(t);
        // temp->next = temp->next->next;
        //ans=head;
        return head;
        
        
        
        /*
        
        
        
        
        
        
        
        
        ListNode* temp = new ListNode(0);
        temp->next = head;
        int len=0;
        ListNode* first = head;
        while(first != NULL)
        {
            len++;
            first=first->next;
        }
        len-=n;
        first=temp;
        while(len>0)
        {
            len--;
            first=first->next;
        }
        first->next=first->next->next;
        return temp->next;
        
        
        */
    }
};
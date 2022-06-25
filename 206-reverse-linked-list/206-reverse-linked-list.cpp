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
    ListNode* reverseList(ListNode* head) {
        ListNode* dummy=NULL;//to store prev node
        ListNode* temp=NULL;//to store
        while(head!=NULL)
        {
            //dummy=head;
            temp=head->next;
            head->next=dummy;
            dummy=head;
            head=temp;
            
            
        }
        return dummy;
        
        
        
    }
};
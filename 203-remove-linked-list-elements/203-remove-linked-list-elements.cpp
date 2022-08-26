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
    ListNode* removeElements(ListNode* head, int val) {
         ListNode * d= new ListNode();
        d ->next = head;
        ListNode * temp = d;
        while(temp ->next != NULL){
            if(temp->next->val == val) temp->next = temp->next->next;
            else{
                temp = temp->next;
            }
        }
        
        
        return d->next;
        
        
    }
};
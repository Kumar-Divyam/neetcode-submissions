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
    bool hasCycle(ListNode* head) {
        ListNode *slow = head, *fast=head->next;
        if(! head || ! head->next)
            return false;

        while(fast != slow){
            if(!fast || !fast->next)
                return false;
            else{
                ListNode *t;
                t = fast->next;
                fast = t->next;
                slow = slow->next;
            }
        }
        return true;
        
    }
};

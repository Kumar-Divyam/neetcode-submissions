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
        if( head == NULL || head->next == NULL)
            return head;

        ListNode* cur = head->next;
        ListNode* prev = head;
        head->next = NULL;
        while(cur->next != NULL){
            prev = cur;
            cur = cur->next;
            prev->next = head;
            head = prev;
        }
        cur->next = head;
        head = cur;

        return head;
    }
};

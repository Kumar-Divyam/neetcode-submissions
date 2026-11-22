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
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        // 1. Find middle
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Split & reverse second half
        ListNode *curr = slow->next;
        slow->next = nullptr;
        ListNode *prev = nullptr;
        while (curr) {
            ListNode *next_node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_node;
        }

        // 3. Merge both halves
        ListNode *first = head, *second = prev;
        while (second) {
            ListNode *tmp1 = first->next;
            ListNode *tmp2 = second->next;

            first->next = second;
            second->next = tmp1;

            first = tmp1;
            second = tmp2;
        }
    }
};
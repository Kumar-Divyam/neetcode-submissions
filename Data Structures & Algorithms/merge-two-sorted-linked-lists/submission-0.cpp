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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *cur1=list1, *cur2=list2, *head=NULL, *t=NULL;
        if(!cur1)
            return list2;
        if(!cur2)
            return list1;


        if(cur1->val <= cur2->val){
            head = cur1;
            t = cur1;
            cur1 = cur1->next;
        }
        else{
            head = cur2;
            t = cur2;
            cur2 = cur2->next;
        }
            
        while(cur1 && cur2){
            if(cur1->val <= cur2->val){
                t->next = cur1;
                t = t->next;
                cur1 = cur1->next;
            }
            else{
                t->next = cur2;
                t = t->next;
                cur2 = cur2->next;
            }
        }

        if(cur1){
            t->next = cur1;
        }
        if(cur2){
            t->next = cur2;
        }
        return head;
    }
};

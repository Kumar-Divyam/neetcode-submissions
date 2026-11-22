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
    void reorderList(ListNode* head1) {

        if(head1==NULL || head1->next==NULL || head1->next->next==NULL )
            return;

        ListNode *t1=head1, *t2=head1, *head2=NULL;

        //finding mid+1
        while(t2->next != NULL && t2->next->next != NULL){
            t1 = t1->next;
            t2 = t2->next->next;
        }

        if(t2->next != NULL){
            t2 = t1;
            t1 = t1->next;
            t2->next = NULL;
        }

        //reverse the other half
        t2 = t1->next;
        t1->next = NULL;
        while(t2 != NULL){
            ListNode *t = t1;
            t1 = t2;
            t2 = t2->next;
            t1->next = t;
        }


        //merge 2 halfs
        t2 = t1;
        t1 = head1;
        ListNode *t = head1;

        while(t1 && t2){
            t1 = t1->next;
            t->next = t2;
            t = t->next;
            t2 = t2->next;
            t->next = t1;
            t = t1;
        }
        return ;
    }
};

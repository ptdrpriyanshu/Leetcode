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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0)
        return head;
        int n=0;
        ListNode *p=head;
        while(p!=NULL)
        {
            p=p->next;
            n++;
        }
        k=k%n;
        while(k--)
        {
            ListNode* t=head;

            while(t->next->next!=NULL)
            {
                t=t->next;
            }
             ListNode *last=t->next;
                t->next=NULL;
                last->next=head;
                head=last;
        }
        return head;
    }
};
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
        ListNode *t=head;
        int count=0;
        while(t!=NULL)
        {
            t=t->next;
            count++;
        }
        if(n==count)
        {
            return head->next;
        }

        t=head;
        for(int i=0;i<count-n-1;i++)
        {
            t=t->next;
        }
        t->next =t->next->next;
        return head;
    }
};
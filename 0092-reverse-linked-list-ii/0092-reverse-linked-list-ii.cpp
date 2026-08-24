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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *t = dummy;
        for(int i=1;i<left;i++)
        {
            t=t->next;
        }
        

        ListNode *prev=NULL;
        ListNode *curr=t->next;

        for(int i=left;i<=right;i++)
        {
            ListNode *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        t->next->next=curr;
        t->next=prev;

        return dummy->next;
    }
};
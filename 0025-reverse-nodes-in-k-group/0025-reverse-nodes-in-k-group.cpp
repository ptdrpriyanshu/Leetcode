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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode* t=head;
        while(count<k)
        {
            if(t==NULL)
            {
                return head;
            }
            t=t->next;
            count++;
        }

        ListNode *prevNode=reverseKGroup(t,k) ;
        t=head;
        count=0;

        while(count<k)
        {
             ListNode* nextNode=t->next;
             t->next=prevNode;
             prevNode=t;
            t=nextNode;

             count++;
        }
        return prevNode;

    }
};
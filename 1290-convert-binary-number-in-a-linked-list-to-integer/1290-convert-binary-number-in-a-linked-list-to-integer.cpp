class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* t = head;
        int ans = 0;

        while(t != NULL)
        {
            ans = ans * 2 + t->val;
            t = t->next;
        }

        return ans;
    }
};
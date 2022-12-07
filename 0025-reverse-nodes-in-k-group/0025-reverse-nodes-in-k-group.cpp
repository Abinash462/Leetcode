/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:

        void reverse(ListNode *start, ListNode *end)
        {
            ListNode *prev = NULL;
            ListNode *curr = start;
            ListNode *currnext = start->next;

            while (prev != end)
            {
                curr->next = prev;
                prev = curr;
                curr = currnext;
                if (currnext != NULL)
                {
                    currnext = currnext->next;
                }
            }
        }

    ListNode* reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL || head == NULL || head->next == NULL)
        {
            return head;
        }
        int inc = k - 1;
        ListNode *start = head;
        ListNode *end = head;

        while (inc--)
        {
            end = end->next;
            if (end == NULL)
            {
                return head;
            }
        }
        ListNode *nexthead = reverseKGroup(end->next, k);
        reverse(start, end);
        start->next = nexthead;
        return end;
    }
};
/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode() : val(0), next(nullptr) {}
 *   ListNode(int x) : val(x), next(nullptr) {}
 *   ListNode(int x, ListNode *next) : val(x), next(next) {}
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
        if (head == NULL || head->next == NULL || k == 1)
        {
            return head;
        }

        ListNode *end = head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *beforestart = dummy;
        int i = 0;

        while (end != NULL)
        {
            i++;
            if (i % k == 0)
            {
                ListNode *start = beforestart->next;
                ListNode *temp = end->next;

                reverse(start, end);
                beforestart->next = end;
                start->next = temp;

                beforestart = start;
                end = temp;
            }
            else
            {
                end = end->next;
            }
        }
        return dummy->next;
    }
};
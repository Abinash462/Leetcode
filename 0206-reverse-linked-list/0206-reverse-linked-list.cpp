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
        ListNode* reverseList(ListNode *head)
        {
            if (head == NULL)
            {
                return NULL;
            }
            ListNode *prev = NULL;
            ListNode *current = head;
            ListNode *nextcurr;
            nextcurr=head->next;

            

            while (current != NULL)
            {
                current->next = prev;
                prev = current;
                current = nextcurr;
                if (nextcurr != NULL)
                {
                    nextcurr = nextcurr->next;
                }
            }
            return prev;
        }
};
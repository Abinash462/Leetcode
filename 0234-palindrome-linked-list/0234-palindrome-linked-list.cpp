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
        ListNode* reverselist(ListNode *head)
        {
            if (head == NULL)
            {
                return NULL;
            }
            ListNode *prev = NULL;
            ListNode *curr = head;
            ListNode *currnext = head->next;

            while (curr != NULL)
            {
                curr->next = prev;
                prev = curr;
                curr = currnext;
                if (currnext != NULL)
                {
                    currnext = currnext->next;
                }
            }
            return prev;
        }

    bool isPalindrome(ListNode *head)
    {

        ListNode *slow = head;
        ListNode *fast = head;

         while(fast -> next != NULL && fast -> next-> next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        slow->next = reverselist(slow->next);

        ListNode *start = head;
        ListNode *mid = slow->next;

        while (mid != NULL)
        {
            if (start->val != mid->val)
            {
                return false;
            }
            start = start->next;
            mid = mid->next;
        }
        slow->next = reverselist(slow->next);
        return true;
    }
};
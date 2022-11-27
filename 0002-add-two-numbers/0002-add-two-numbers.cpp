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

        ListNode* reverse(ListNode *head)
        {
            ListNode *curr = head;
            ListNode *prev = NULL;
            ListNode *forward = NULL;

            while (curr != NULL)
            {
                forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward;
            }
            return prev;
        }

    ListNode* insertattail(ListNode* &head, ListNode* &tail, int value)
    {
        ListNode *temp = new ListNode(value);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return 0;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        return head;
    }

    ListNode* add(ListNode *first, ListNode *second)
    {
        int carry = 0;
        ListNode *anshead = NULL;
        ListNode *anstail = NULL;

        while (first != NULL || second != NULL || carry != NULL)
        {

            int value1 = 0;
            if (first != NULL)
            {
                value1 = first->val;
            }
            int value2 = 0;
            if (second != NULL)
            {
                value2 = second->val;
            }

            int sum = carry + value1 + value2;
            int digit = sum % 10;

            insertattail(anshead, anstail, digit);
            carry = sum / 10;

            if (first != NULL)
            {
                first = first->next;
            }

            if (second != NULL)
            {
                second = second->next;
            }
        }

        return anshead;
    }
    public:
        ListNode* addTwoNumbers(ListNode *l1, ListNode *l2)
        {

            ListNode *ans = add(l1, l2);
            return ans;
        }
};
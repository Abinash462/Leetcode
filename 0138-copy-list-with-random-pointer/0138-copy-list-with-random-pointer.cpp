/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
    public:
        void copylist(Node *head)
        {
            Node *temp = head;
            Node *n = head->next;
            while (temp != NULL)
            {
                Node *copy = new Node(temp->val);
                temp->next = copy;
                copy->next = n;

                temp = n;
                if (n != NULL)
                {
                    n = n->next;
                }
            }
        }

    void randomlist(Node *head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->random != NULL)
            {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }
    }

    Node* detach(Node *head)
    {
        Node *temp = head;
        Node *dummy = new Node(-1);
        dummy->next = head;
        Node *tail = dummy;

        while (temp != NULL)
        {
            tail->next = temp->next;
            tail = tail->next;

            temp->next = tail->next;

            temp = temp->next;
        }
        return dummy->next;
    }

    Node* copyRandomList(Node *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        copylist(head);
        randomlist(head);
        return detach(head);
    }
};
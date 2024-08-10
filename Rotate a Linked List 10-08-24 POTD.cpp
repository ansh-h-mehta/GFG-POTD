// https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1

class Solution
{
public:
    // Function to rotate a linked list.
    Node *rotate(Node *head, int k)
    {
        // Your code here
        Node *temp = head;
        int n = 0;
        while (temp)
        {
            n++;
            temp = temp->next;
        }
        if (k == n)
            return head;
        int cnt = 1;
        temp = head;
        while (cnt != k)
        {
            cnt++;
            temp = temp->next;
        }
        Node *temp2 = temp->next;
        Node *node = temp2;
        while (temp2->next != NULL)
            temp2 = temp2->next;
        temp2->next = head;
        temp->next = NULL;
        return node;
    }
};
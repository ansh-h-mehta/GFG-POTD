// https://www.geeksforgeeks.org/problems/deletion-and-reverse-in-linked-list/1

class Solution
{
public:
    Node *reverse(Node *head)
    {
        Node *temp = head;
        Node *newnode = NULL;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        Node *prev = temp;

        Node *mainAdd = prev;

        temp = prev->next;

        while (temp->next != head)
        {
            newnode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = newnode;
        }

        temp->next = prev;
        prev = newnode;
        return prev;
    }

    // Function to delete a node from the circular linked list
    Node *deleteNode(Node *head, int key)
    {
        bool flag = 0;
        if (head->data == key)
            flag = true;
        Node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        Node *prev = temp;

        temp = head;
        while (temp->data != key && temp->next != head)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp->next == head && temp->data != key)
            return head;

        prev->next = temp->next;

        return (flag) ? head->next : head;
    }
};
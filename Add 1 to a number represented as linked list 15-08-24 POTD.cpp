// https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1

class Solution
{
public:
    Node *reverse(Node *head)
    {
        Node *prev = NULL;
        Node *curr = head;
        while (curr)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void print(Node *head)
    {
        while (head)
        {
            cout << head->data << "->";
            head = head->next;
        }
        cout << "NULL" << endl;
    }

    Node *addOne(Node *head)
    {
        head = reverse(head);

        int carry = 1;
        Node *tail = NULL;
        Node *runner = head;

        while (runner && carry)
        {
            if (runner->data == 9)
            {
                runner->data = 0;
            }
            else
            {
                runner->data = runner->data + 1;
                carry = 0;
            }
            tail = runner;
            runner = runner->next;
        }

        if (carry)
        {
            tail->next = new Node(1);
        }

        Node *res = reverse(head);

        return res;
    }
};
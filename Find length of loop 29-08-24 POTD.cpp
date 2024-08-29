// https://www.geeksforgeeks.org/problems/find-length-of-loop/1

class Solution
{
public:
    int countNodesinLoop(Node *head)
    {
        if (head == NULL && head->next == NULL)
        {
            return 0;
        }
        Node *second = head;
        Node *first = head->next;
        while (first != NULL && first->next != NULL)
        {
            if (first == second)
            {
                break;
            }
            second = second->next;
            first = first->next->next;
        }
        if (first == second)
        {
            int count = 1;
            second = second->next;
            while (second != first)
            {
                count++;
                second = second->next;
            }
            return count;
        }
        else
        {
            return 0;
        }
    }
};
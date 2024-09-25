// https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

class Solution
{
public:
    bool isPalindrome(Node *head)
    {
        // Your code here
        Node *curr = head;
        stack<int> s;
        int count = 0;
        while (curr != NULL)
        {
            count++;
            s.push(curr->data);
            curr = curr->next;
        }
        int half = (count / 2);
        int checker = 0;
        while (checker < half && head != NULL)
        {
            checker++;
            if (head->data != s.top())
            {
                return false;
            }
            head = head->next;
            s.pop();
        }
        if (checker == half)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
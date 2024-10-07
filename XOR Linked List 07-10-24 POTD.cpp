// https://www.geeksforgeeks.org/problems/xor-linked-list/1

struct Node *insert(struct Node *head, int data)
{
    struct Node *newNode = new Node(data);

    newNode->npx = head;

    if (head)
    {
        head->npx = XOR(head->npx, newNode);
    }

    head = newNode;

    return head;
}

vector<int> getList(struct Node *head)
{
    vector<int> res;

    struct Node *curr = head;
    struct Node *prev = NULL;
    struct Node *next;

    while (curr != NULL)
    {
        res.push_back(curr->data);

        next = XOR(prev, curr->npx);

        prev = curr;
        curr = next;
    }

    return res;
}
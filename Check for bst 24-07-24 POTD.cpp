// https://www.geeksforgeeks.org/problems/check-for-bst/1

class Solution
{
public:
    bool check(Node *root, int mini, int maxi)
    {
        if (!root)
            return true;
        if (root->data <= mini || root->data >= maxi)
            return false;
        bool l = check(root->left, mini, root->data);
        bool r = check(root->right, root->data, maxi);
        if (!l || !r)
            return false;
        return true;
    }
    bool isBST(Node *root)
    {
        return check(root, INT_MIN, INT_MAX);
    }
};
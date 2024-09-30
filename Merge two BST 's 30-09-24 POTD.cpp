// https://www.geeksforgeeks.org/problems/merge-two-bst-s/1

class Solution
{
public:
    void inorderTraversal(Node *root, vector<int> &v1)
    {
        if (root == NULL)
            return;
        inorderTraversal(root->left, v1);
        v1.push_back(root->data);
        inorderTraversal(root->right, v1);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
        vector<int> first, second, result;
        inorderTraversal(root1, first);
        inorderTraversal(root2, second);
        int i = 0, j = 0;
        while (i < first.size() && j < second.size())
        {
            if (first[i] <= second[j])
                result.push_back(first[i++]);
            else
                result.push_back(second[j++]);
        }
        while (i < first.size())
        {
            result.push_back(first[i++]);
        }
        while (j < second.size())
        {
            result.push_back(second[j++]);
        }
        return result;
    }
};
// https://www.geeksforgeeks.org/problems/merge-two-bst-s/1

class Solution
{
public:
    void merge(Node *root, vector<int> &v)
    {
        if (root == NULL)
            return;
        merge(root->left, v);
        v.push_back(root->data);
        merge(root->right, v);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
        vector<int> v1, v2, count;
        merge(root1, v1);
        merge(root2, v2);
        int i = 0, j = 0;
        while (i < v1.size() && j < v2.size())
        {
            if (v1[i] <= v2[j])
                count.push_back(v1[i++]);
            else
                count.push_back(v2[j++]);
        }
        while (i < v1.size())
            count.push_back(v1[i++]);
        while (j < v2.size())
            count.push_back(v2[j++]);
        return count;
    }
};
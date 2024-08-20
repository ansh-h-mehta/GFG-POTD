// https://www.geeksforgeeks.org/problems/burning-tree/1

class Solution
{
public:
    void traverse(Node *root, unordered_map<int, list<int>> &adj)
    {
        if (root == NULL)
            return;

        if (root->left)
        {
            adj[root->data].push_back(root->left->data);
            adj[root->left->data].push_back(root->data);
        }

        if (root->right)
        {
            adj[root->data].push_back(root->right->data);
            adj[root->right->data].push_back(root->data);
        }
        traverse(root->left, adj);
        traverse(root->right, adj);
    }

    int minTime(Node *root, int target)
    {
        // Your code goes here
        unordered_map<int, list<int>> adj;
        traverse(root, adj);

        queue<int> q;
        q.push(target);
        unordered_map<int, bool> vis;
        vis[target] = true;

        int timeToBurn = 0;
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                auto node = q.front();
                q.pop();

                for (auto nbr : adj[node])
                {
                    if (!vis[nbr])
                    {
                        q.push(nbr);
                        vis[nbr] = true;
                    }
                }
            }
            timeToBurn++;
        }

        return timeToBurn - 1;
    }
};
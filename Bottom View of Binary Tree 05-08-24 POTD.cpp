// https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

class Solution
{
public:
    vector<int> bottomView(Node *root)
    {
        vector<int> ans;
        queue<pair<Node *, int>> q;
        unordered_map<int, int> mp;
        int minLevel = 0;
        int maxLevel = 0;
        q.push({root, 0});
        while (q.empty() == false)
        {
            auto curr = q.front();
            q.pop();
            Node *currNode = curr.first;
            int currLevel = curr.second;
            minLevel = min(currLevel, minLevel);
            maxLevel = max(currLevel, maxLevel);
            if (currNode->left)
            {
                q.push({currNode->left, currLevel - 1});
            }
            if (currNode->right)
            {
                q.push({currNode->right, currLevel + 1});
            }
            mp[currLevel] = currNode->data;
        }
        for (int i = minLevel; i <= maxLevel; i++)
        {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};
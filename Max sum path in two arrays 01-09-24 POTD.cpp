// https://www.geeksforgeeks.org/problems/max-sum-path-in-two-arrays/1

class Solution
{
public:
    int dfs(int node, unordered_map<int, vector<int>> &mp, unordered_map<int, int> &memo, unordered_set<int> &visited)
    {
        if (memo.find(node) != memo.end())
        {
            return memo[node];
        }

        visited.insert(node);
        int max_sum = 0;
        for (int neighbor : mp[node])
        {
            max_sum = max(max_sum, dfs(neighbor, mp, memo, visited));
        }
        visited.erase(node);

        memo[node] = max_sum + node;
        return memo[node];
    }

    int maxPathSum(vector<int> &arr1, vector<int> &arr2)
    {
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < arr1.size() - 1; i++)
        {
            mp[arr1[i]].push_back(arr1[i + 1]);
        }
        for (int i = 0; i < arr2.size() - 1; i++)
        {
            mp[arr2[i]].push_back(arr2[i + 1]);
        }

        unordered_map<int, int> memo;
        unordered_set<int> visited;
        int ans = 0;

        if (!arr1.empty())
        {
            ans = max(ans, dfs(arr1[0], mp, memo, visited));
        }
        if (!arr2.empty())
        {
            ans = max(ans, dfs(arr2[0], mp, memo, visited));
        }

        return ans;
    }
};
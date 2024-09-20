// https://www.geeksforgeeks.org/problems/minimum-cost-path3833/1

class Solution
{
public:
    int minimumCostPath(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        if (n == 1 && m == 1)
            return grid[0][0];
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        dist[0][0] = grid[0][0];

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({grid[0][0], 0});

        while (!pq.empty())
        {
            int curr = pq.top().first;
            int i = pq.top().second / m, j = pq.top().second % m;
            pq.pop();

            if (i + 1 < n && dist[i + 1][j] > curr + grid[i + 1][j])
            {
                dist[i + 1][j] = curr + grid[i + 1][j];
                int nex = (i + 1) * m + j;
                pq.push({dist[i + 1][j], nex});
            }
            if (i - 1 >= 0 && dist[i - 1][j] > curr + grid[i - 1][j])
            {
                dist[i - 1][j] = curr + grid[i - 1][j];
                int nex = (i - 1) * m + j;
                pq.push({dist[i - 1][j], nex});
            }
            if (j + 1 < m && dist[i][j + 1] > curr + grid[i][j + 1])
            {
                dist[i][j + 1] = curr + grid[i][j + 1];
                int nex = (i)*m + j + 1;
                pq.push({dist[i][j + 1], nex});
            }
            if (j - 1 >= 0 && dist[i][j - 1] > curr + grid[i][j - 1])
            {
                dist[i][j - 1] = curr + grid[i][j - 1];
                int nex = (i)*m + j - 1;
                pq.push({dist[i][j - 1], nex});
            }
        }
        return dist[n - 1][m - 1];
    }
};
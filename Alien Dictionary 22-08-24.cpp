class Solution
{
public:
    string findOrder(string dict[], int n, int k)
    {
        // code here
        vector<set<int>> graph(k);
        vector<int> inDegree(k, 0);

        for (int i = 0; i < n - 1; ++i)
        {
            string word1 = dict[i];
            string word2 = dict[i + 1];
            int len = min(word1.length(), word2.length());

            for (int j = 0; j < len; ++j)
            {
                if (word1[j] != word2[j])
                {
                    int u = word1[j] - 'a';
                    int v = word2[j] - 'a';
                    if (graph[u].find(v) == graph[u].end())
                    {
                        graph[u].insert(v);
                        inDegree[v]++;
                    }
                    break;
                }
            }
        }

        queue<int> q;
        for (int i = 0; i < k; ++i)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
            }
        }

        string result;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            result += (u + 'a');

            for (auto v : graph[u])
            {
                inDegree[v]--;
                if (inDegree[v] == 0)
                {
                    q.push(v);
                }
            }
        }

        if (result.length() < k)
            return "";

        return result;
    }
};
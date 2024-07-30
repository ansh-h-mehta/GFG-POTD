class Solution
{
public:
    void help(int row, int col, vector<vector<int>> &mat, int n, string path, vector<string> &res, vector<vector<int>> &vis)
    {
        if (row == 0 && col == 0)
        {
            res.push_back(path);
            return;
        }

        string p = "RDLU";
        int drow[] = {0, -1, 0, 1};
        int dcol[] = {-1, 0, 1, 0};

        for (int k = 0; k < 4; k++)
        {
            int r = row + drow[k];
            int c = col + dcol[k];

            if (r >= 0 && c >= 0 && r < n && c < n && mat[r][c] == 1 && !vis[r][c])
            {
                vis[r][c] = 1;
                help(r, c, mat, n, p[k] + path, res, vis);
                vis[r][c] = 0;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &mat)
    {
        int n = mat.size();
        vector<string> res;

        vector<vector<int>> vis(n, vector<int>(n, 0));

        if (!mat[n - 1][n - 1])
            return res;

        vis[n - 1][n - 1] = 1;

        help(n - 1, n - 1, mat, n, "", res, vis);

        return res;
    }
};
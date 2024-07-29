// https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1

class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> &arr)
    {
        int n = arr.size();
        int m = arr[0].size();
        int j;
        int cnt = 0;
        int maxi = INT_MIN;
        int row = -1;
        for (int i = 0; i < n; i++)
        {
            j = 0;
            while (arr[i][j] != 1 && j < m)
            {
                j++;
            }
            if (m - j > maxi && j != m)
            {
                maxi = m - j;
                row = i;
            }
        }
        return row;
    }
};
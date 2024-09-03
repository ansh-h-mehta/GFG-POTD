// https://www.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1

class Solution
{
    int recur(string &str1, string &str2, int i, int j, vector<vector<int>> &dp)
    {
        if (i < 0 or j < 0)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (str1[i] == str2[j])
            return dp[i][j] = 1 + recur(str1, str2, i - 1, j - 1, dp);
        else
        {
            return dp[i][j] = max(recur(str1, str2, i - 1, j, dp), recur(str1, str2, i, j - 1, dp));
        }
    }
    int lcs(string &str1, string &str2)
    {
        vector<vector<int>> dp(str1.length(), vector<int>(str2.length(), -1));
        return recur(str1, str2, str1.length() - 1, str2.length() - 1, dp);
    }

public:
    int minOperations(string str1, string str2)
    {
        return str1.length() + str2.length() - 2 * lcs(str1, str2);
    }
};
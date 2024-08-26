// https://www.geeksforgeeks.org/problems/wildcard-pattern-matching/1

class Solution
{
public:
    int wildCard(string pattern, string str)
    {

        int n = pattern.size();

        int m = str.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = n; i >= 0; i--)
        {

            for (int j = m; j >= 0; j--)
            {

                if (i == n && j == m)
                {

                    dp[i][j] = 1;
                }

                else if (i == n)
                {

                    dp[i][j] = 0;
                }

                else if (j == m)
                {

                    if (pattern[i] == '*')
                    {

                        dp[i][j] = dp[i + 1][j];
                    }

                    else
                        dp[i][j] = 0;
                }

                else
                {

                    if (pattern[i] == str[j])
                    {

                        dp[i][j] = dp[i + 1][j + 1];
                    }

                    else if (pattern[i] == '?')
                    {

                        dp[i][j] = dp[i + 1][j + 1];
                    }

                    else if (pattern[i] == '*')
                    {

                        dp[i][j] = dp[i + 1][j] || dp[i][j + 1];
                    }

                    else
                    {

                        dp[i][j] = 0;
                    }
                }
            }
        }

        return dp[0][0];
    }
};
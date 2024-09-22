// https://www.geeksforgeeks.org/problems/longest-prefix-suffix2527/1

class Solution
{
public:
    int lps(string str)
    {
        // Your code goes here
        int n = str.size();
        vector<int> llps(n, 0);
        int i = 1;
        int len = 0;

        while (i < n)
        {
            if (str[i] == str[len])
            {
                len++;
                llps[i] = len;
                i++;
            }
            else
            {
                if (len != 0)
                {
                    len = llps[len - 1];
                }
                else
                {
                    llps[i] = 0;
                    i++;
                }
            }
        }
        return llps[n - 1];
    }
};
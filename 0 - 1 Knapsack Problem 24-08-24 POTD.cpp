// https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

class Solution
{

private:
    int rec(int i, int W, vector<int> &wt, vector<int> &val, vector<vector<int>> &mem)
    {
        if (i >= val.size())
            return 0;
        if (mem[i][W] != -1)
            return mem[i][W];
        int take = 0;
        if (W >= wt[i])
            take = val[i] + rec(i + 1, W - wt[i], wt, val, mem);
        int not_take = rec(i + 1, W, wt, val, mem);
        return mem[i][W] = max(take, not_take);
    }

public:
    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, vector<int> &wt, vector<int> &val)
    {
        // Your code here
        vector<vector<int>> mem(val.size() + 1, vector<int>(W + 1, -1));
        return rec(0, W, wt, val, mem);
    }
};
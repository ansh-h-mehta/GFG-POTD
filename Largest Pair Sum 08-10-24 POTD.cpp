// https://www.geeksforgeeks.org/problems/pair-sum--120604/1

class Solution
{
    int pairsum(vector<int> &arr)
    {
        // code here

        int pairsum = 0;
        int maxi = -1;
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {

            if (arr[i] > maxi)
                maxi = arr[i];
        }

        for (int i = 0; i < n; i++)
        {

            int sum = maxi + arr[i];
            if (sum > pairsum && arr[i] != maxi)
                pairsum = sum;
        }

        return pairsum;
    }
};
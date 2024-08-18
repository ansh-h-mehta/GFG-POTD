// https://www.geeksforgeeks.org/problems/split-an-array-into-two-equal-sum-subarrays/1
class Solution
{
    bool canSplit(vector<int> &arr)
    {
        int sum = 0, subarr = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum = sum + arr[i];
        }

        for (int i = 0; i < arr.size() - 1; i++)
        {
            subarr += arr[i];
            if (subarr * 2 == sum)
            {
                return true;
            }
        }
        return false;
    }
};
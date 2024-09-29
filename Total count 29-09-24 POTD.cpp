// https://www.geeksforgeeks.org/problems/total-count2415/1

class Solution
{
public:
    int totalCount(int k, vector<int> &arr)
    {
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % k == 0)
            {
                count = count + arr[i] / k;
            }
            else
            {
                count = count + arr[i] / k + 1;
            }
        }
        return count;
    }
};
// https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

class Solution
{
public:
    void sort012(vector<int> &arr)
    {
        int a[3] = {0, 0, 0};

        for (int x : arr)
        {
            a[x]++;
        }

        for (int i = 0, j = 0; i <= 2; i++)
        {
            while (a[i])
            {
                arr[j++] = i;
                a[i]--;
            }
        }
    }
};
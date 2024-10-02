// https://www.geeksforgeeks.org/problems/rotate-and-delete-1587115621/1

class Solution
{
public:
    int rotateDelete(vector<int> &arr)
    {
        int n = arr.size();

        int x = n / 2;

        bool flag = false;
        int ct = 1;
        for (int i = n - 1; i >= 0; i--)
        {

            if (ct == x)
                return arr[i];

            ct++;
            if (flag)
            {
                flag = false;
                continue;
            }
            else
            {
                i--;
                flag = true;
            }
        }

        return 0;
    }
};

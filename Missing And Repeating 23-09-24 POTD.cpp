// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

class Solution
{
public:
    vector<int> findTwoElement(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int e = abs(arr[i]);
            if (arr[e - 1] < 0)
                v.push_back(e);
            else
                arr[e - 1] *= -1;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                v.push_back(i + 1);
                return v;
            }
        }
    }
};
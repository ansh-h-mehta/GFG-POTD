// https://www.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1

class Solution
{
public:
    int Maximize(vector<int> &a)
    {
        long long int n = a.size();
        long long int m = 1000000007;

        sort(a.begin(), a.end());

        long long int sum = 0;

        for (long long int i = 0; i < n; i++)
        {

            sum = sum + (i * a[i]);
        }

        return (sum % m) % m;
    }
};
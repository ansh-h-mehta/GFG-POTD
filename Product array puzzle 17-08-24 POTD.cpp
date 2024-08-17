// https://www.geeksforgeeks.org/problems/product-array-puzzle4525/1

class Solution
{
public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int> &nums)
    {

        // code here
        long long int n = nums.size();
        vector<long long int> prefix(n, 1);

        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        vector<long long int> suffix(n, 1);
        for (int i = n - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < n; i++)
        {
            prefix[i] = prefix[i] * suffix[i];
        }

        return prefix;
    }
};

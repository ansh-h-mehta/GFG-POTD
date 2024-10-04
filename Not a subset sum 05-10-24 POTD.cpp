// https://www.geeksforgeeks.org/problems/smallest-number-subset1220/1

class Solution
{
public:
    long long findSmallest(vector<int> &arr)
    {
        // Your code goes here.
        long long sum = 1;
        for (int x : arr)
        {
            if (x <= sum)
                sum += x;
        }
        return sum;
    }
};
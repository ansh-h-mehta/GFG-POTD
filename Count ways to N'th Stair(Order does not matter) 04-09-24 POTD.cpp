// https://www.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter5639/1

class Solution
{
public:
    int nthStair(int n)
    {
        return (n == 1 || n == 2) ? n : (n / 2) + 1;
    }
};
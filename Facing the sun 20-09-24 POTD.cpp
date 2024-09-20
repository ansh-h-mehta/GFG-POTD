// https://www.geeksforgeeks.org/problems/facing-the-sun2126/1

class Solution
{
public:
    int countBuildings(vector<int> &height)
    {
        int count = 1, max_height = height[0];
        for (int i = 1; i < height.size(); i++)
        {
            if (height[i] > max_height)
            {
                count++;
                max_height = height[i];
            }
        }
        return count;
    }
};
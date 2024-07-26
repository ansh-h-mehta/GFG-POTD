// https://www.geeksforgeeks.org/problems/k-pangrams0909/1

class Solution
{
public:
    bool kPangram(string str, int k)
    {
        unordered_map<char, int> m;
        int count = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != ' ')
            {
                count++;
                m.insert({str[i], 1});
            }
        }
        return (26 - m.size() <= count - m.size() && 26 - m.size() <= k) ? true : false;
    }
};
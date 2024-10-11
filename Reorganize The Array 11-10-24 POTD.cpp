// https://www.geeksforgeeks.org/problems/reorganize-the-array4810/1

class Solution
{
public:
    vector<int> rearrange(const vector<int> &arr)
    {

        // due to using const vector creating another one

        vector<int> res = arr;

        unordered_map<int, int> mp;

        for (int i = 0; i < arr.size(); i++)
        {

            mp[res[i]] = i;
        }

        for (int i = 0; i < arr.size(); i++)
        {

            if (mp.find(i) != mp.end())
            {

                res[i] = i;
            }

            else
            {

                res[i] = -1;
            }
        }

        return res;
    }
};
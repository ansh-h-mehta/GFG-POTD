// https://www.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency-1587115621/1

class Solution
{
public:
    static unordered_map<int, int> mp;
    static bool comp(int a, int b)
    {
        if (mp[a] == mp[b])
        {
            return a < b;
        }
        return mp[a] > mp[b];
    }

    vector<int> sortByFreq(vector<int> &arr)
    {
        mp.clear();
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        sort(arr.begin(), arr.end(), comp);
        return arr;
    }
};
unordered_map<int, int> Solution::mp;
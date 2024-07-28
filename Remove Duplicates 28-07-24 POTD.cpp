// https://www.geeksforgeeks.org/problems/remove-duplicates3034/1

class Solution
{
public:
    string removeDups(string str)
    {
        unordered_set<char> st;
        string ans = "";
        for (auto i : str)
        {
            if (st.find(i) == st.end())
            {
                ans += i;
            }
            st.insert(i);
        }
        return ans;
    }
};
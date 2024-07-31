// https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1

class Solution
{
public:
    string longestCommonPrefix(vector<string> arr)
    {
        sort(arr.begin(), arr.end());
        string ans = "";
        for (int i = 0; i < arr[0].length(); i++)
        {
            char ch = arr[0][i];
            bool f = 1;
            for (int j = 0; j < arr.size(); j++)
            {
                if (arr[j][i] != ch)
                {
                    f = 0;
                    break;
                }
            }
            if (f)
                ans += ch;
            else
                break;
        }
        if (ans.length())
            return ans;
        return "-1";
    }
};
// https://www.geeksforgeeks.org/problems/roof-top-1587115621/1

class Solution
{
public:
    int maxStep(vector<int> &arr)
    {
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] < arr[i + 1])
                cnt++;
            else
            {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        ans = max(cnt, ans);
        return ans;
    }
};
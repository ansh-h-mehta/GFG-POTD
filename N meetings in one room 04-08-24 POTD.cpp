// https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

class Solution
{
public:
    int maxMeetings(int n, int start[], int end[])
    {
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            int a = start[i], b = end[i];
            p.push_back({b, a});
        }
        sort(p.begin(), p.end());
        int cnt = 1;
        int cur = p[0].first;
        for (int i = 1; i < n; i++)
        {
            if (p[i].second > cur)
            {
                cnt++;
                cur = p[i].first;
            }
        }
        return cnt;
    }
};
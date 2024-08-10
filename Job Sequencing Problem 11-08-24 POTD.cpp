// https:// www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1

class Solution
{
public:
    vector<int> JobScheduling(Job arr[], int n)
    {
        map<int, vector<int>> mp;
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            mp[arr[i].dead].push_back(arr[i].profit);
        }
        for (auto it : mp)
            v.push_back(it.first);
        priority_queue<int> pq;
        sort(v.begin(), v.end());
        int time = v.back();
        v.pop_back();
        int cnt = 0, sum = 0;
        while (time != 0)
        {
            int ntime = v.back();
            int have = time - ntime;
            for (auto it : mp[time])
            {
                pq.push(it);
            }
            while (pq.size() > 0 and have > 0)
            {
                sum += pq.top();
                pq.pop();
                have--, cnt++;
            }
            time = ntime;
            v.pop_back();
        }
        return {cnt, sum};
    }
};
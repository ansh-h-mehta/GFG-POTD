// https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

class Solution
{
    long long minCost(vector<long long> &arr)
    {
        priority_queue<long long, vector<long long>, greater<long long>> pq(arr.begin(), arr.end());
        long long int ans = 0;
        while (pq.size() > 1)
        {
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();

            long long c = a + b;
            pq.push(c);
            ans += c;
        }

        return ans;
    }
};
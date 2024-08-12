// https://www.geeksforgeeks.org/problems/sum-of-middle-elements-of-two-sorted-arrays2305/1

class Solution
{
public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2)
    {
        int n = arr1.size();
        int m = arr2.size();
        int n1 = (n + m) / 2;
        int low = 0;
        int high = n;
        while (low <= high)
        {
            int mid1 = low + (high - low) / 2;
            int l1 = mid1 > 0 ? arr1[mid1 - 1] : INT_MIN;
            int mid2 = n1 - mid1;
            int l2 = mid2 > 0 ? arr2[mid2 - 1] : INT_MIN;
            int r1 = mid1 < n ? arr1[mid1] : INT_MAX;
            int r2 = mid2 < m ? arr2[mid2] : INT_MAX;
            if (l1 > r2)
            {
                high = mid1 - 1;
            }
            else if (l2 > r1)
            {
                low = mid1 + 1;
            }
            else
            {
                return max(l1, l2) + min(r1, r2);
            }
        }
        return -1;
    }
};
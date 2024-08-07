// https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1

class Solution
{
public:
    int kthElement(int k, vector<int> &arr1, vector<int> &arr2)
    {
        vector<int> temp;
        temp.insert(temp.end(), arr1.begin(), arr1.end());
        temp.insert(temp.end(), arr2.begin(), arr2.end());
        sort(temp.begin(), temp.end());
        return temp[k - 1];
    }
};
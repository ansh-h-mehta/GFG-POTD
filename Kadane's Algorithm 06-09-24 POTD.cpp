// https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

class Solution {
    public:
    int maxSubarraySum(vector<int> &arr) {
    
    int maxSoFar = arr[0]; 
    int currentMax = arr[0]; 
    for (int i = 1; i < arr.size(); i++) {
        currentMax = max(arr[i], currentMax + arr[i]); 
        maxSoFar = max(maxSoFar, currentMax); 
    }

    return maxSoFar;
    }
};
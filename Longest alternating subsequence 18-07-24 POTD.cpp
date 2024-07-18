// https://www.geeksforgeeks.org/problems/longest-alternating-subsequence5951/1

class Solution{
  public:
     int alternatingMaxLength(vector<int>& arr) {
        int inc = 1;
        int dec = 1;
        for(int p = 1; p < arr.size(); p++){
            if(arr[p] > arr[p-1]) inc = dec+1;
            else if(arr[p]<arr[p-1]) dec = inc+1;
        }
        return max(inc, dec);
    }
};
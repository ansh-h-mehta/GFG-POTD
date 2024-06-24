// https://www.geeksforgeeks.org/problems/summed-matrix5834/1

class Solution {
  public:
    long long sumMatrix(long long n, long long q){
        if (q < 2 || q > 2 * n) {
            return 0;
        }
    
        long long start = max(1LL, q - n);
        long long end = min(n, q - 1);
        
        return end - start + 1;
    }
};
// https://www.geeksforgeeks.org/problems/swapping-pairs-make-sum-equal4142/1

class Solution {
  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        long long tot1=0,tot2=0;
        
        sort(a,a+n);
        sort(b,b+m);
        
        tot1 = accumulate(a,a+n,tot1);
        tot2 = accumulate(b,b+m,tot2);
        
        int diff = abs(tot1-tot2);
        
        if(diff==0) {
            return 1;
        }
        
        if(diff%2!=0) {
            return -1;
        }
        
        for(int i=0;i<n;i++) {
            int val = a[i];
            int req = diff-val;
            
            if(binary_search(b,b+m,req)){
                return 1;
            }
        }
        return -1;
    }
};
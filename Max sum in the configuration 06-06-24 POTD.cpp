// https://www.geeksforgeeks.org/problems/max-sum-in-the-configuration/1

class Solution {
  public:
    long long max_sum(int arr[], int n) {
        long long int sum=0,rem=0,ans=0,tsum=0;
        for(long long  i=0;i<n;i++){
            sum = sum + 1ll*(arr[i])*i;
            tsum = tsum + 1ll*(arr[i]);
        }
        ans=max(ans,sum);
        for(long long int i=n-1;i>=0;i--){
            tsum-=arr[i];
            sum+=(-(long long )(n-1)*arr[i]+tsum+rem);
            ans=max(ans,sum);
            rem+=(arr[i]);
        }
        return ans;
    }
};
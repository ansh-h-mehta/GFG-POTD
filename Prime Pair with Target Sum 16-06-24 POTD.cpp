// https://www.geeksforgeeks.org/problems/sum-of-prime4751/1


class Solution {
  public:
    vector<int> getPrimes(int n) {
        // code here
        int flag=0;
        vector<int>ans;
        for(int i=2;i<=n/2;i++)
        {
            if(isPrime(i) && isPrime(n-i))
            {
                ans.push_back(i);
                ans.push_back(n-i);
                flag=1;
                break;
                
            }
        }
        if(flag==1)
           return ans;
        else
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
    }
    int isPrime(int n)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
              return 0;
        }
        return 1;
    }
};
// 
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        int n = arr.size();
    long long mod = 1e9 + 7;
    long long prod = 1;
    vector<int> negatives;
    int countPositives = 0;
    int countZeros = 0;

    if (n == 1) return arr[0] % mod;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            countZeros++;
        } else if (arr[i] < 0) {
            negatives.push_back(arr[i]);
        } else {
            countPositives++;
            prod = (prod * arr[i]) % mod;
        }
    }

    if (countPositives == 0 && negatives.size() == 0) return 0;

    if (countPositives == 0 && countZeros > 0 && negatives.size() == 1) {
        return 0;
    }
    sort(negatives.begin(), negatives.end());

    if (negatives.size() % 2 != 0) {
        for (int i = 0; i < negatives.size() - 1; i++) {
            prod = (prod * negatives[i]) % mod;
        }
    } else {
        for (int i = 0; i < negatives.size(); i++) {
            prod = (prod * negatives[i]) % mod;
        }
    }

    return (prod + mod) % mod;
    }
};
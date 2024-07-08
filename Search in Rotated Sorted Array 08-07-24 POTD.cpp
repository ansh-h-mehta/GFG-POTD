// https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1

class Solution {
  public:
    int findKey(vector<int> arr, int i, int j, int key){
        while(i<=j){
            if(arr[i]==key){
                return i;
            }
            else if(arr[j] == key){
                return j;
            }
            int mid = (i+j)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid] > key){
                j = mid-1;
            }
            else{
                i = mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& arr, int key) {
        // complete the function here
        int n = arr.size();
        int ans = -1;
        int l = 0, r = n-1, point = 0;
        if(arr[0]==key){
            return 0;
        }
        if(arr[n-1]==key){
            return n-1;
        }
        if(arr[l] < arr[r]){
            return findKey(arr, 0, n-1, key);
        }
        while(l < r){
            int mid = (l+r)/2;
            if(mid>0 && arr[mid]<arr[mid-1]){
                point = mid;
                break;
            }
            else if(mid<n && arr[mid]>arr[mid+1]){
                point = mid+1;
                break;
            }
            else{
                if(arr[mid+1] < arr[l]){
                    r = mid-1;
                }
                else
                    l = mid+1;
            }
        }
        
        if(arr[n-1] > key){
            ans = findKey(arr, point, n-1, key);
        }
        else{
            ans = findKey(arr, 0, point-1, key);
        }
        return ans;
    }
};
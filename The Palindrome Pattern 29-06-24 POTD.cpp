class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        int row=-1;
        for(int i=0;i<arr.size();i++){
            int start=0;
            int breaked=1;
            int end=arr[i].size()-1;
            while(start<=end){
                if(arr[i][start]==arr[i][end]){
                    start++;
                    end--;
                }else{
                    breaked=0;
                    break;
                }
            }
            if(breaked==1){
                row=i;
                break;
            }
        }
        int column=-1;
        for(int i=0;i<arr.size();i++){
            int start=0;
            int breaked=1;
            int end=arr.size()-1;
            while(start<=end){
                if(arr[start][i]==arr[end][i]){
                    start++;
                    end--;
                }else{
                    
                    breaked=0;
                    break;
                }
            }
            if(breaked==1){
                column=i;
                break;
            }
        }
        if(row!=-1){
            string ans="";
            ans+=to_string(row);
            ans+=' ';
            ans+='R';
            return ans;
        }else{
            if(column!=-1){
                string ans="";
                ans+=to_string(column);
                ans+=' ';
                ans+='C';
                return ans;
                
            }
        }
        return "-1";
    }
};
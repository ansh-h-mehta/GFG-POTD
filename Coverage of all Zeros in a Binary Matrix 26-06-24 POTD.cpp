// https://www.geeksforgeeks.org/problems/coverage-of-all-zeros-in-a-binary-matrix4024/1

class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        int ans=0;
        int n=matrix.size();
        int m=matrix[0].size();
        int delrow[4]={0,-1,1,0};
        int delcol[4]={-1,0,0,1};
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                for(int i=0;i<4;i++){
                    if(matrix[row][col]==0){
                        int nrow=row+delrow[i];
                        int ncol=col+delcol[i];
                        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m){
                            if(matrix[nrow][ncol]==1)ans++;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
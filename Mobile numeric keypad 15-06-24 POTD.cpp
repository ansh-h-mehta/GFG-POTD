/* https://www.geeksforgeeks.org/problems/mobile-numeric-keypad5456/1 */
class Solution {
   public:
   long long dfs(int i,vector<vector<int>>&adj,int n,vector<vector<long long>>&dp){
      if(n==0){
          return 1;
      }
      if(n<0){
          return 0;
      }
      if(dp[i][n]!=-1){
          return dp[i][n];
      }
      long long ans=0;
      for(auto it:adj[i]){
          ans+=dfs(it,adj,n-1,dp);
      }
      return dp[i][n]=ans;
      
  }
    long long getCount(int n) {
        // Your code goes here
        vector<vector<int>>adj(10,vector<int>());
        adj[0] = {0, 8};
        adj[1] = {1, 2, 4};
        adj[2] = {2, 1, 3, 5};
        adj[3] = {3, 2, 6};
        adj[4] = {4, 1, 5, 7};
        adj[5] = {5, 2, 4, 6, 8};
        adj[6] = {6, 3, 5, 9};
        adj[7] = {7, 4, 8};
        adj[8] = {8, 5, 7, 9, 0};
        adj[9] = {9, 6, 8};
        
        long long ans=0;
        vector<vector<long long>>dp(10,vector<long long>(n+1,-1));
        
        for(int i=0;i<10;i++){
            ans+=dfs(i,adj,n-1,dp);
        }
        return ans;
    }
};
class Solution {
public:
    // vector<vector<int>> dp;
    // int f(int i,int j,vector<vector<int>>& obstacleGrid){
    //     if(i<0 || j<0)return 0;
    //     if(obstacleGrid[i][j]==1)return 0;
    //     if(i==0 && j==0)return 1;
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     int up=f(i-1,j,obstacleGrid);
    //     int left=f(i,j-1,obstacleGrid);
    //     return dp[i][j]=up+left;
    // }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        // dp.assign(m,vector<int> (n,-1));
        vector<vector<int>> dp(m,vector<int> (n,-1));
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1){
                    dp[i][j]=0;
                    continue;
                }
                if(i==0 && j==0){
                    dp[i][j]=1;
                    continue;
                }
                int up=i>0?dp[i-1][j]:0;
                int left=j>0?dp[i][j-1]:0;
                dp[i][j]=up+left;
            }
        }
        return dp[m-1][n-1];
    }
};
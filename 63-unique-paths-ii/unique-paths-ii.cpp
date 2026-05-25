class Solution {
public:
    int func(int i,int j, vector<vector<int>>&dp,vector<vector<int>>&grid,int m,int n)
    {
        if(i>=m || j>=n) return 0;
        if(grid[i][j]==1) return 0;
        if(i==m-1 && j==n-1) return 1;

        if(dp[i][j]!=-1) return dp[i][j];

        int down=func(i+1,j,dp,grid,m,n);
        int right=func(i,j+1,dp,grid,m,n);

        return dp[i][j]=down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();

        vector<vector<int>>dp(m,vector<int>(n,-1));

        return func(0,0,dp,obstacleGrid,m,n);
    }
};
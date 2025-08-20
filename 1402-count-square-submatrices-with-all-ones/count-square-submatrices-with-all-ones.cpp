class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size(),0));
        int count=0;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            dp[i][0]=matrix[i][0];
        }
        for(int i=0;i<n;i++)
        {
            dp[0][i]=matrix[0][i];
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i>0 && j>0 && matrix[i][j]==1)
                {
                    dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
                }
                
                count+=dp[i][j];
            }
        }

        return count;



        
    }
};
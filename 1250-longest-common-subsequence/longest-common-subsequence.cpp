class Solution {
public:
    // int t[1001][1001];
    // int solve(string &s1,string&s2,int i,int j)
    // {
    //     if(i>=s1.length() || j>=s2.length())
    //     {
    //         return 0;
    //     }
    //     if(t[i][j]!=-1)
    //     {
    //         return t[i][j];
    //     }
    //     if(s1[i]==s2[j])
    //     {
    //         return 1+solve(s1,s2,i+1,j+1);
    //     }

    //     else
    //     {
    //         return t[i][j]= max(solve(s1,s2,i+1,j),solve(s1,s2,i,j+1));
    //     }
    // }
    int longestCommonSubsequence(string text1, string text2) {
        // memset(t,-1,sizeof(t));
        // return solve(text1,text2,0,0);
        int m=text1.length();
        int n=text2.length();
        vector<vector<int>>dp(m+1,vector<int>(n+1));
        for(int i=0;i<n+1;i++)
        {
            dp[0][i]=0;
        }
        for(int i=0;i<m+1;i++)
        {
            dp[i][0]=0;
        }

        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    dp[i][j]=1+ dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[m][n];
    }
};
class Solution {
public:
    // int n,m,N;
    // int t[101][101];
    // bool solve(int i,int j,string &s1,string &s2,string &s3)
    // {
    //     if(i==n && j==m && (i+j)==N)
    //     {
    //         return true;
    //     }
    //     if((i+j)>=N)
    //     {
    //         return false;
    //     }
    //     if(t[i][j]!=-1)
    //     {
    //         return t[i][j];
    //     }
    //     bool result=false;
    //     if(s1[i]==s3[i+j])
    //     {
    //         result= solve(i+1,j,s1,s2,s3);
    //     }
    //     if(result) return t[i][j]=true;
    //     if(s2[j]==s3[i+j])
    //     {
    //         result= solve(i,j+1,s1,s2,s3);
    //     }

    //     return t[i][j]=result;
    // }
    // bool isInterleave(string s1, string s2, string s3) {
    //      n=s1.length();
    //      m=s2.length();
    //      N=s3.length();
    //      memset(t,-1,sizeof(t));
    //     return solve(0,0,s1,s2,s3);
    // }

    bool isInterleave(string s1, string s2, string s3) {
         int n=s1.length();
         int m=s2.length();
         int N=s3.length();
         if(n+m!=N)
         {
            return false;
         }

         vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
         dp[0][0]=true;
         for(int i=1;i<=n;i++)
         {
            dp[i][0]=dp[i-1][0] &&(s1[i-1]==s3[i-1]);
         }
         for(int i=1;i<=m;i++)
         {
            dp[0][i]=dp[0][i-1] && (s2[i-1]==s3[i-1]);
         }

         for(int i=1;i<=n;i++)
         {
            for(int j=1;j<=m;j++)
            {
                dp[i][j]=(dp[i-1][j] && (s1[i-1]==s3[i+j-1])) || (dp[i][j-1] && (s2[j-1] == s3[i+j-1]));
            }
         }
         return dp[n][m];
    }
};

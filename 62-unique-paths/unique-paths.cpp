class Solution {
public:
    // vector<vector<int>>memo;
    int uniquePaths(int m, int n) {
        // memo.resize(m,vector<int>(n,-1));
        // return func(m,n,0,0);
        int num=m+n-2;
        int k=min(m-1,n-1);
        long long res=1;
        for(int i=1;i<=k;i++)
        {
            res*=(num-i+1);
            res/=i;
        }
        return res;
    }

    // int func(int m,int n,int i,int j)
    // {
    //     if(i==m-1 && j==n-1){
    //         return 1;
    //     }
    //     if(i>=m || j>=n ){
    //         return 0;
    //     }
    //     if(memo[i][j]!=-1)
    //     {
    //         return memo[i][j];
    //     }

    //     return memo[i][j]=func(m,n,i,j+1)+func(m,n,i+1,j);
        
        
    // }
};
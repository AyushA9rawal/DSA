class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(prices,0,true,dp);
    }

    int solve(vector<int>&prices,int i,bool buying,vector<vector<int>>&dp)
    {
        if(i>=prices.size())
        {
            return 0;
        }

        if(dp[i][buying]!=-1)
        {
            return dp[i][buying];
        }
        int cooldown=solve(prices,i+1,buying,dp);
        if(buying)
        {
            int buy=solve(prices,i+1,false,dp)-prices[i];
            dp[i][buying]=max(buy,cooldown);
        }
        else
        {
            int sell=solve(prices,i+2,true,dp)+prices[i];
            dp[i][buying]=max(sell,cooldown);
        }
        return dp[i][buying];
    }
};

class Solution {
public:
    int t[5001][1001];
    int solve(int i,bool buying,vector<int>&prices)
    {
        if(i>=prices.size()) return 0;
        if(t[i][buying]!=-1)
        {
            return t[i][buying];
        }
        int cooldown=solve(i+1,buying,prices);
        int buy;
        int sell;
        if(buying)
        {
             buy=solve(i+1,false,prices)-prices[i];
            
        }
        else
        {
             sell=solve(i+2,true,prices)+prices[i];
        }
        return t[i][buying]=max(buy,cooldown);
    }
    int maxProfit(vector<int>& prices) {
        memset(t,-1,sizeof(t));
        return solve(0,true,prices);
    }
};
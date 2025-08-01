class Solution {
public:
    // int t[101];
    int rob(vector<int>& nums) {
        // memset(t,-1,sizeof(t));
        int n=nums.size();

        vector<int>dp(n+1,0);
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=2;i<=nums.size();i++)
        {
            int steal=nums[i-1]+dp[i-2];
            int skip=dp[i-1];
            dp[i]=max(steal,skip);
        }

        return dp[n];

        
    }

    // int rec(vector<int>&nums,int i)
    // {
    //     if(i>=nums.size()) return 0;
    //     if(t[i]!=-1) return t[i];
    //     int steal=nums[i]+rec(nums,i+2);
    //     int skip=rec(nums,i+1);
    //     return t[i]=max(steal,skip);
    // }
};
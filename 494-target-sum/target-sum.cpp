class Solution {
public:
    int solve(vector<int>&nums,int i,int sum)
    {
        if(i>=nums.size())
        {
            if(sum==0)
            {
                return 1;
            }
            return 0;
        }
        

        int plus=solve(nums,i+1,sum-nums[i]);
        int minus=solve(nums,i+1,sum+nums[i]);
        return plus + minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        return solve(nums,0,target);
    }
};

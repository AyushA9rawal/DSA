class Solution {
public:
    unordered_map<int,int> t[21];
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

        if(t[i].count(sum))
        {
            return t[i][sum];
        }
        

        int plus=solve(nums,i+1,sum-nums[i]);
        int minus=solve(nums,i+1,sum+nums[i]);
        return t[i][sum]=plus + minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums,0,target);
    }
};

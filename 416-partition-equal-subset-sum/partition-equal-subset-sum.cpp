class Solution {
public:
    int t[201][20001];
    bool solve(vector<int>&nums,int i,int  x)
    {
        if(x==0) return true;
        if(i>=nums.size()) return false;
        if(t[i][x]!=-1) return t[i][x];
        bool take=false;
        if(x>=nums[i])
        {
             take=solve(nums,i+1,x-nums[i]);
        }
        bool not_take=solve(nums,i+1,x);
        return t[i][x]=take || not_take;
    }
    bool canPartition(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        int target=accumulate(nums.begin(),nums.end(),0);
        if(target%2!=0) return false;
        return solve(nums,0,target/2);
    }
};
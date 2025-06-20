class Solution {
public:
    int t[101];
    int rob(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        return rec(nums,0);
        
    }

    int rec(vector<int>&nums,int i)
    {
        if(i>=nums.size()) return 0;
        if(t[i]!=-1) return t[i];
        int steal=nums[i]+rec(nums,i+2);
        int skip=rec(nums,i+1);
        return t[i]=max(steal,skip);
    }
};
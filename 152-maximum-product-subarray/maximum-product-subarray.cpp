class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            int cur=nums[i];
            res=max(res,cur);
            for(int j=i+1;j<n;j++)
            {
                cur*=nums[j];
                res=max(cur,res);
            }
        }
        return res;
    }
};
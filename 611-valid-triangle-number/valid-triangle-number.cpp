class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=2;i<nums.size();i++)
        {
            int l=0;
            int r=i-1;
            while(l<r)
            {
                if(nums[r]+nums[l]>nums[i])
                {
                    count+=(r-l);
                    r--;
                }
                else
                {
                    l++;
                }
            }
            
        }
        return count;
    }
};
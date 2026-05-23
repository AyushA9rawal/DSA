class Solution {
public:
    bool isSorted(vector<int>nums)
    {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                return false;
            }
            
        }
        return true;
    }
    bool check(vector<int>& nums) {
        int i=0;
        while(i<nums.size())
        {
            if(isSorted(nums))
            {
                return true;
            }
            
            int n=nums[0];
            nums.erase(nums.begin());
            nums.push_back(n);
            i++;
            
        }

        return false;
    }
};
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0;
        unordered_set<int>seen;
        int curSum=0;
        int maxSum=0;

        for(int r=0;r<nums.size();r++)
        {
            while(seen.find(nums[r])!=seen.end()){
                curSum-=nums[l];
                seen.erase(nums[l]);
                l++;

            }

            curSum+=nums[r];
            seen.insert(nums[r]);
            maxSum=max(maxSum,curSum);
        }
        return maxSum;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       int i;
       map<int,int>mpp;
       for(i=0;i<n;i++)
       {
            int moreNeeded=target-nums[i];

            if(mpp.find(moreNeeded)!=mpp.end())
            {
                return {mpp[moreNeeded],i};
            } 
            mpp[nums[i]]=i;
       }

       return {-1,-1};
    }
};
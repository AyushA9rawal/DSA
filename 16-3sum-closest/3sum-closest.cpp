class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int mini=INT_MAX;
        int tsum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target)return sum;

                int absDiff=abs(target-sum);
                if(absDiff<mini)
                {
                    mini=absDiff;
                    tsum=sum;
                }
                
                if(sum<target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return tsum;
    }
};
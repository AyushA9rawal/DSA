class Solution {
public:
    int maxSum(vector<int>& nums) {
       unordered_set<int>st;
       int maxNeg=INT_MIN;
       int sum=0;
       if(nums.size()==1) return nums[0];
       for(int &num:nums)
       {
            if(num<=0)
            {
                maxNeg=max(maxNeg,num);
            }
            else if(!st.count(num))
            {
                st.insert(num);
                sum+=num;
            }
       }

       return (sum==0)?maxNeg:sum;
    }
};
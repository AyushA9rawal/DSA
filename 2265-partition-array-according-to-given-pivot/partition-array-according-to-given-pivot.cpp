class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int i=0;
        int j=nums.size()-1;
        vector<int>res(nums.size());
        int left=0;
        int right=nums.size()-1;
        while(i<nums.size())
        {
            if(nums[i]<pivot)
            {
                res[left]=nums[i];
                left++;
            }
            if(nums[j]>pivot)
            {
                res[right]=nums[j];
                right--;
            }

            i++;
            j--;
        }

        while(left<=right)
        {
            res[left]=pivot;
            left++;
        }
        return res;
    }
};
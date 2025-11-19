class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        vector<int>arr(1001,0);
        for(int n:nums)
        {
            arr[n]++;
        }

        while(original<=1000 && arr[original]!=0)
        {
            original*=2;
        }
        return original;
    }
};
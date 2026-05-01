class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();

        int sum = accumulate(nums.begin(), nums.end(), 0);

        int F = 0;
        for (int i = 0; i < n; i++) {
            F += i * nums[i];
        }

        int maxi = F;

        for (int k = 1; k < n; k++) {
            F = F + sum - n * nums[n - k];
            maxi = max(maxi, F);
        }

        return maxi;
    }
};
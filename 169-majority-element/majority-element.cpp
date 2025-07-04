class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num:nums)
        {
            mp[num]++;
        }
        int n=nums.size();
        int k=n/2;
        for(auto &[key,val]:mp)
        {
            if(val>k)
            {
                return key;
            }
        }
        return 0;
    }
};
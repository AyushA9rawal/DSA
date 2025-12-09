class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        long long ans=0;
        const int mod=1e9+7;
        unordered_map<int,int>prefixMap;
        for(int i:nums)
        {
            int total=mp[2*i];
            int left=prefixMap[2*i];
            int right=total-left;
            if(i==0) right--;
            prefixMap[i]++;
            ans=(ans+ left*1LL*right)%mod;

        }
        return ans;
    }
};
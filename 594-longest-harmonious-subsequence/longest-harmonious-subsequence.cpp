class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mymap;
        for(int i=0;i<nums.size();i++)
        {
            mymap[nums[i]]++;
        }
        int cnt=0;
        int maxi=0;
        for(auto it:mymap){
            if(mymap.count(it.first+1))
            {
                int currlen=mymap[it.first]+mymap[it.first+1];
                maxi=max(maxi,currlen);
                
            }
        }
        return maxi;
    }
};
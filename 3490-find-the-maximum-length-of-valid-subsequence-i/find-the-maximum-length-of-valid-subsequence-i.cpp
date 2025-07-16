class Solution {
public:
   
    int maximumLength(vector<int>& nums) {
        int even=0;
        int odd=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        int alternating=1;
        int parity=nums[0]%2;
        for(int i=1;i<n;i++)
        {
            int curr=nums[i]%2;
            if(curr!=parity)
            {
                alternating++;
                parity=curr;
            }
            
            
        }

        return max({even,odd,alternating});
    }
};
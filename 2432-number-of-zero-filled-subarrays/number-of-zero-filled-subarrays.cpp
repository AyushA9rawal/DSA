class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        long long streak=0;
        for(int num:nums)
        {
            if(num==0)
            {
                streak++;
                count+=streak;
            }
            else
            {
                streak=0;
            }

        }
        return count;
    }
};


//[1,3,0,0,2,0,0,4] => what is the error. first dry run.

//count =0; streak=0;
//
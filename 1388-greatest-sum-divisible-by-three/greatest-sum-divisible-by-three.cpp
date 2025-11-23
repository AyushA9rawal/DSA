class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int>remain1,remain2;
        int sum=0;
        for(int &num:nums)
        {
            sum+=num;
            if(num%3==1)
            {
                remain1.push_back(num);
            }
            else if(num%3==2)
            {
                remain2.push_back(num);
            }
        }
        if(sum%3==0) return sum;
        sort(remain1.begin(),remain1.end());
        sort(remain2.begin(),remain2.end());

        int result=0;

        if(sum%3==1)
        {
            int rem1=remain1.size()>=1 ? remain1[0]: INT_MAX;
            int rem2=remain2.size()>=2 ?remain2[0]+remain2[1]:INT_MAX;
            result=max(result,sum-min(rem1,rem2));
        }
        else if(sum%3==2)
        {
            int rem1=remain2.size()>=1 ? remain2[0]: INT_MAX;
            int rem2=remain1.size()>=2 ? (remain1[0]+remain1[1]):INT_MAX;
            result=max(result,sum-min(rem1,rem2));
        }
        return result;

    }
};
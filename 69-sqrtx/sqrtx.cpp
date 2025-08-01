class Solution {
public:
    int mySqrt(int x) {
        long long left=1;
        long long right=x;
        while(left<=right)
        {
            long long mid=(left+right)/2;
            if (mid*mid==x) return mid;
            else if(mid*mid<x)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return right;
    }
};
class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        if(num1==num2) return -1;
        for(long long k=1;k<=60;k++)
        {
            long long sum=num1-k*1LL*num2;
            if(sum<0) continue;
            int bits=__builtin_popcountll(sum);
            if(bits<=k && k<=sum)
            {
                return (int)k;
            }
        }
        return -1;
    }
};
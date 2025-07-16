class Solution {
public:
    double myPow(double x, int n) 
    {
        double res=1;
        long long pw=abs((long long)n);
        while(pw>0)
        {
            if(pw%2==0)
            {
                pw/=2;
                x*=x;
            }
            else
            {
                pw--;
                res*=x;
            }
        }
        if(n<0) return 1/res;
        return res;
    }
};
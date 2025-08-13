class Solution {
public:
    bool isPowerOfThree(int n) {
        // double num=logBase3(n);
        // if(fmod(num,1)==0.0)
        // {
        //     return true;
        // }
        // return false;
        if(n<=0) return false;
        while(n%3==0)
        {
            n/=3;
        }
        return n==1;
    }

    // double logBase3(double x)
    // {
    //     return log(x)/log(3.0);
    // }
};
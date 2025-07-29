class Solution {
public:
    bool isPowerOfTwo(int n) {
        double ans=log2(n);
        if(fmod(ans,1.0)==0.0)
        {
            return true;
        }
        return false;
    }
};
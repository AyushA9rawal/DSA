class Solution 
{
public:
    bool solve(int i,int j,string &s)
    {
        if(i>=j) return true;
        if(s[i]==s[j])
        {
            return solve(i+1,j-1,s);
        }
        else 
        {
            return false;
        }
    }
    string longestPalindrome(string s) 
    {
        int startPoint=0;
        int maxlen=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(solve(i,j,s))
                {
                    if(maxlen<j-i+1)
                    {
                        maxlen=j-i+1;
                        startPoint=i;
                    }
                }
            }
        }
        return s.substr(startPoint,maxlen);
    }
};
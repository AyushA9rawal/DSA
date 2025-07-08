class Solution 
{
public:
    int t[1001][1001];
    bool solve(int i,int j,string &s)
    {
        if(i>=j) return 1;
        if(t[i][j]!=-1) return t[i][j];
        if(s[i]==s[j])
        {
            return t[i][j]=solve(i+1,j-1,s);
        }
        else 
        {
            return 0;
        }
    }
    string longestPalindrome(string s) 
    {
        int startPoint=0;
        int maxlen=INT_MIN;
        memset(t,-1,sizeof(t));
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
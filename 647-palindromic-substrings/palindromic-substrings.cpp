class Solution {
public:
    bool solve(int i,int j,string &s)
    {
        if(i>=j) 
        {
            return true;
        }
        if(s[i]==s[j])
        {
            return solve(i+1,j-1,s);
        }
        else
        {
            return false;
        }
    }
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(solve(i,j,s))
                {
                    count++;
                }
            }
        }
        return count;
    }
};
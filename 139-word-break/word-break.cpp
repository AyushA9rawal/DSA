class Solution {
public:
    int t[301];
    bool wordBreak(string s, vector<string>& wordDict) {
        memset(t,-1,sizeof(t));
        return dfs(s,wordDict,0);
    }

    bool dfs(string &s,vector<string>&wordDict,int i)
    {
        if(i==s.length()) return true;
        if(t[i]!=-1) return t[i];
        for(string word:wordDict)
        {
            if( s.substr(i,word.length())==word && i+word.length()<=s.length())
            {
                if(dfs(s,wordDict,i+word.length()))
                {
                    return t[i]=1;
                }
            }
        }
        return t[i]=0;
    }

};
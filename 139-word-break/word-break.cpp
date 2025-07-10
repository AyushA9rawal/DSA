class Solution {
public:
    // int t[301];
    // bool wordBreak(string s, vector<string>& wordDict) {
    //     memset(t,-1,sizeof(t));
    //     return dfs(s,wordDict,0);
    // }

    // bool dfs(string &s,vector<string>&wordDict,int i)
    // {
    //     if(i==s.length()) return true;
    //     if(t[i]!=-1) return t[i];
    //     for(string word:wordDict)
    //     {
    //         if( s.substr(i,word.length())==word && i+word.length()<=s.length())
    //         {
    //             if(dfs(s,wordDict,i+word.length()))
    //             {
    //                 return t[i]=1;
    //             }
    //         }
    //     }
    //     return t[i]=0;
    // }


    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>myset(wordDict.begin(),wordDict.end());
        int maxlen=0;
        for(string word:wordDict)
        {
            maxlen=max(maxlen,(int)word.size());
        }
        int n=s.size();
        vector<bool>dp(n+1);
        dp[0]=true;
        for(int i=1;i<=n;i++)
        {
            for(int j=i-1;j>=max(0,i-maxlen);j--)
            {
                if(dp[j] && myset.find(s.substr(j,i-j))!=myset.end())
                {
                    dp[i]=true;
                    break;
                }
            }
        }

        return dp[n];
    }
};
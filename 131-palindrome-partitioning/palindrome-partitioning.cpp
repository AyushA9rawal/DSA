class Solution {
public:
    bool isPali(string &s, int l, int r)
    {
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    void dfs(int ind,string &s, vector<string>&part, vector<vector<string>>&res)
    {
        if(ind==s.size())
        {
            res.push_back(part);
            return ;
        }

        for(int i=ind;i<s.size();i++)
        {
            if(isPali(s,ind,i))
            {
                part.push_back(s.substr(ind,i-ind+1));
                dfs(i+1,s,part,res);
                part.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>part;
        dfs(0,s,part,res);
        return res;
    }
};

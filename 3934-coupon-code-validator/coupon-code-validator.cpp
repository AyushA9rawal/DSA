class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n=code.size();
        vector<pair<string,string>>valid;
        unordered_map<string,int> ord={{"electronics",0},{"grocery",1},{"pharmacy",2},{"restaurant",3}};

    for(int i=0;i<n;i++)
    {
        if(isValid(code[i]) && ord.count(businessLine[i]) && isActive[i])
        {
            valid.push_back({businessLine[i],code[i]});
        }
    }

sort(valid.begin(),valid.end(),[&](const pair<string,string>&a,const pair<string,string>&b)
     {
         if(ord[a.first] != ord[b.first])
         {
             return ord[a.first]<ord[b.first];
         }
         return a.second < b.second;
     }
);
     vector<string>result;
for(auto &p:valid)
    {
        result.push_back(p.second);
        
    }
    return result;

    }

    bool isValid(string &s)
{
    if(s.empty()) return false;
    for(char c: s)
        {
            if(!(isalnum(c) || c=='_')) return false;
        }
    return true;
}
};


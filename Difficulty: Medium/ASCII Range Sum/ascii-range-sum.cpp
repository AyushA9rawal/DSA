class Solution {
  public:
    vector<int> asciirange(string& s) {
        // code here
        unordered_map<char,vector<int>>mymap;
        for(int i=0;i<s.size();i++)
        {
            mymap[s[i]].push_back(i);
        }
        
        vector<int>ans;
        
        
        for(auto [key,val]:mymap)
        {
            if(val.size()>1)
            {
                int count=0;
                int firstInd=val[0];
                int lastInd=val[val.size()-1];
                for(int i=firstInd+1;i<lastInd;i++)
                {
                    count+= (int)s[i];
                    
                }
                if(count>0) ans.push_back(count);
            }
        }
        return ans;
    }
};
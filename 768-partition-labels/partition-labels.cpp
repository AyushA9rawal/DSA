class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mymap;
        for(int i=0;i<s.size();i++)
        {
            mymap[s[i]]=i;
        }
        int size=0;
        int end=0;
        vector<int>res;
        for(int i=0;i<s.size();i++)
        {
            end=max(end,mymap[s[i]]);
            size++;
            if(i==end)
            {
                res.push_back(size);
                size=0;
            }
        }
        return res;
    }
};

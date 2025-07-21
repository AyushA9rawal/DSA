class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits=="") return {};
        vector<string> res;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output;

        rec(res,digits,0,mapping,output);
        return res;
    }

    void rec(vector<string> &res,string digits, int i,string mapping[],string output)
    {
        
        if(i>=digits.length())
        {
            res.push_back(output);
            return;
        }

        int num=digits[i]-'0';
        string temp=mapping[num];
        for(int j=0;j<temp.size();j++)
        {
            output.push_back(temp[j]);
            rec(res,digits,i+1,mapping,output);
            output.pop_back();
        }
    }
};
class Solution {
public:
    string makeFancyString(string s) {
        vector<int>chars(s.begin(),s.end());
        int count=1;
        char last=chars[0];
        int pos=1;
        for(int i=1;i<chars.size();i++)
        {
            if(chars[i]!=last)
            {
                last=chars[i];
                count=0;

            }

            count++;
            if(count>2) continue;
            chars[pos]=chars[i];
            pos++;
        }
        return string(chars.begin(),chars.begin()+pos);
    }
};
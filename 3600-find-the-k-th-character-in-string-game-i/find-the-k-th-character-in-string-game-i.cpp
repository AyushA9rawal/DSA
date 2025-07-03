class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.length()<k)
        {
            int len=s.length();
            for(int i=0;i<len;i++)
            {
                char next='a'+((s[i]-'a'+1)%26);
                s+=next;
            }
        }
        return s[k-1];
    }
};
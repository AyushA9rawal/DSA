class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        if(s.length()==0) return 0;
        int cnt;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ')
            {

            }
            else
            {
                int j=i;
                 cnt=0;
                while(j>=0 && s[j]!=' ')
                {
                    cnt++;
                    j--;
                }
                break;
            }
        }
        return cnt;
    }
};
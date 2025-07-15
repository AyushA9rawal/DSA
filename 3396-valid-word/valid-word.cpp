class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        int n=word.size();
        string vlist="aeiouAEIOU";
        int vowels=0;
        int consonants=0;
        for(char c:word)
        {
            if(isalpha(c))
            {
                if(vlist.find(c)!=string::npos){
                    vowels++;
                }
                else
                {
                    consonants++;
                }
            }
            else if(!isdigit(c))
            {
                return false;
            }

        }
        return vowels>=1 && consonants>=1;
        
    }
};
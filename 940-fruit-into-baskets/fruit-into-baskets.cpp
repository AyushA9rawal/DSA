class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0;
        int r=0;
        int maxlen=0;
        unordered_map<int,int>mymap;

        while(r<fruits.size())
        {
            mymap[fruits[r]]++;

            if(mymap.size()>2)
            {
                mymap[fruits[l]]--;
                if(mymap[fruits[l]]==0)
                {
                    mymap.erase(fruits[l]);
                }
                l++;
            }

            else if(mymap.size()<=2)
            {
                 int len=r-l+1;
                maxlen=max(len,maxlen);
            }
            r++;
        }
        return maxlen;
    }
};
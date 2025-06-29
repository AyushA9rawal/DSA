class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool c1,c2,c3;
        c1=c2=c3=false;
        for(auto triplet : triplets)
        {
            if(triplet[0]<=target[0] && triplet[1]<=target[1] && triplet[2]<=target[2])
            {
                if(triplet[0]==target[0])
                {
                    c1=true;
                }
                if(triplet[1]==target[1])
                {
                    c2=true;
                }
                if(triplet[2]==target[2])
                {
                    c3=true;
                }
            }
        }
        return c1 && c2 && c3;
    }
};

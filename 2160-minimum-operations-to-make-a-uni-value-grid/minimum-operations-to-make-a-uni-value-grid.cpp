class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int rem=grid[0][0]%x;
        vector<int>vct;
        for(auto &row: grid)
        {
            for(auto &val:row)
            {
                if(val%x!=rem)
                {
                    return -1;
                }
                vct.push_back(val);
            }
        }

        sort(vct.begin(),vct.end());
        int n=vct.size();
        int median=vct[n/2];

        int operations=0;
        for(int val: vct)
        {
            operations+=abs(val - median)/x;

        }
        return operations;
    }
};
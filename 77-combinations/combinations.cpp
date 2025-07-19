class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>vct;
        vector<int>com;
        solve(com,1,vct,n,k);
        return vct;
    }

    void solve(vector<int>&com,int start,vector<vector<int>>&vct,int n,int k){
        if(k==com.size())
        {
            vct.push_back(com);
            return ;
        }

        for(int i=start;i<=n;i++)
        {
            com.push_back(i);
            solve(com,i+1,vct,n,k);
            com.pop_back();
        }
    }

};
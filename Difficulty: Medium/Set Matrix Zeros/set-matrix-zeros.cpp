class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        vector<int>visRow(mat.size(),0);
        vector<int>visCol(mat[0].size(),0);
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                    visRow[i]=1;
                    visCol[j]=1;
                }
            }
        }
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(visRow[i] || visCol[j])
                {
                    mat[i][j]=0;
                }
            }
        }
        
    }
};
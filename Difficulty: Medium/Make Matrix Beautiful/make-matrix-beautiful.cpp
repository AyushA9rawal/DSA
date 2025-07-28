class Solution {
  public:
    int balanceSums(vector<vector<int>>& mat) {
        // code here
        int sum=0;
        int maxSum=0;
        for(int i=0;i<mat.size();i++)
        {
            int sum=0;
            for(int j=0;j<mat[0].size();j++)
            {
                sum+=mat[i][j];
            }
            maxSum=max(sum,maxSum);
        } //row max sum;
        
        for(int j=0;j<mat[0].size();j++)
        {
            int sum=0;
            for(int i=0;i<mat.size();i++)
            {
                sum+=mat[i][j];
            }
            maxSum=max(sum,maxSum);
            
        }  //column max sum
        
        
        int count=0;
        for(int i=0;i<mat.size();i++)
        {
            int sum=0;
            for(int j=0;j<mat[0].size();j++)
            {
                sum+=mat[i][j];
                
            }
            count+=(maxSum-sum);
        }
        
        return count;
    }
};
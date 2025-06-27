class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>vct(n,vector<int>(n,0));
        int cnt=1;
        int left=0,right=vct[0].size(),top=0, bottom=vct.size();
        while(left<right && top<bottom)
        {
            for(int i=left;i<right;i++)
            {
                vct[top][i]=cnt;
                cnt++;
            }

            top++;

            for(int i=top;i<bottom;i++)
            {
                vct[i][right-1]=cnt;
                cnt++;
            }
            right--;

            if(top<bottom)
            {
                for(int i=right-1;i>=left;i--)
                {
                    vct[bottom-1][i]=cnt;
                    cnt++;
                }
                bottom--;
            }

            
            if(left<right)
            {
                 for(int i=bottom-1;i>=top;i--)
                {
                    vct[i][left]=cnt;
                    cnt++;
                }
                left++;
            }

            
        }
        return vct;
    }
};
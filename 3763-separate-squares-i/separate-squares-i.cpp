class Solution {
public:
    double findArea(double y,vector<vector<int>>&squares){
        double area=0;
        for(auto &it:squares)
            {
                double x=it[0];
                double y1=it[1];
                double side=it[2];
                double yTop=it[1]+it[2];

                if(yTop<=y)
                {
                    area+= side*side;
                }
                else if(y>y1)
                {
                    area+=(y-y1)*side;
                }
            }

        return area;
    }
    double separateSquares(vector<vector<int>>& squares) {
        double totalArea=0;
        vector<double>y_cord;
        for(auto &it:squares)
            {
                totalArea+= (long long)it[2]* (long long)it[2];
                y_cord.push_back(it[1]);
                y_cord.push_back(it[1]+it[2]);
            }

        sort(y_cord.begin(),y_cord.end());

        double l=y_cord.front();
        double r=y_cord.back();
        double mid;
        while(r-l >= 1e-5)
            {
                mid=(l+r)/2.0;
                double ar=findArea(mid,squares);
                if(ar<totalArea/2.0)
                {
                    l=mid;
                }
                else
                {
                    r=mid;
                }
                
            }
        return l;
    }
};
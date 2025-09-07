class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>vct(n);
        for(int i=0;i<n;i++){
            vct[i]=i*2 -n +1;
        }
        return vct;
    }
};
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        
        int l=0;
        int r=arr.size()-1;
        while(l+1<arr.size()-1 && arr[l]<arr[l+1])
        {
            l++;
        }

        while(r-1>0 && arr[r-1]>arr[r])
        {
            r--;
            
        }

        return l==r;
    }
};
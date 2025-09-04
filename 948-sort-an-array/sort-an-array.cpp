class Solution {
public:
    void mergeSort(vector<int>&nums,int st,int end)
    {
        if(st<end)
        {
            int mid=st+(end-st)/2;
            mergeSort(nums,st,mid); // left half
            mergeSort(nums,mid+1,end); //right half
            merge(nums,st,mid,end);//merge
        }
    }

    void merge(vector<int>&nums,int st,int mid,int end)
    {
        vector<int>temp;
        int i=st;
        int j=mid+1;
        while(i<=mid && j<=end)
        {
            if(nums[i]<=nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i<=mid)
        {
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=end)
        {
            temp.push_back(nums[j]);
            j++;
        }

        for(int i=0;i<temp.size();i++)
        {
            nums[i+st]=temp[i];//copy all temp data into original nums
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};
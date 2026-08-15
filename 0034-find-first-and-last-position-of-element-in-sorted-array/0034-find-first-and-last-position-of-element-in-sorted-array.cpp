class Solution {
public:
    int first(vector<int>& nums, int target)
    {
        int res=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                res=mid;
                high=mid-1;
            }

        }
        return res;
    }

    int second(vector<int>& nums, int target)
    {
        int res=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                res=mid;
                low=mid+1;
            }

        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int F=first(nums,target);
        int S=second(nums,target);

        return {F,S};
    }
};
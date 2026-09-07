class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1)
    return 0;
        int n=nums.size();

        int low=0;
        int prod=1;
        int ans=0;

        for(int high=0;high<n;high++)
        {
            prod=prod*nums[high];
            while(prod>=k)
            {
                prod=prod/nums[low];
                low++;
            }
            ans+=high-low+1;
        }
        return ans;
    }
};
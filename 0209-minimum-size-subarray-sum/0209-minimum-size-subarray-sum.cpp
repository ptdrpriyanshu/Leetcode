class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int sum=0;
        int len=INT_MAX;
        for(int high=0;high<n;high++)
        {
            sum+=nums[high];

            while(sum>=target)
            {
                len=min(len,high-low+1);
                sum-=nums[low];
                low++;
            }

            
        }
        if(len==INT_MAX) return 0;
        return len;
    }
};
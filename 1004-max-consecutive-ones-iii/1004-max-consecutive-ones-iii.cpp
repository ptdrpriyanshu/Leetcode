class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int zero=0;
        int low = 0;
        int len=0;
        int res=-1;
        for(int high=0;high<n;high++)
        {
            if(nums[high]==0)
                zero++;

            while(zero>k)
            {
                if(nums[low]==0)
                    zero--;

                low++;
            }
            len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};
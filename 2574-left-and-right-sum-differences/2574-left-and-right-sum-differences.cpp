class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        vector<int>res(n);
        int left=0;
        for(int i:nums)
        {
            sum+=i;
        }
        
        for(int i=0;i<n;i++)
        {
           int right=sum-left-nums[i];
            res[i]=abs(left-right);
            left=left+nums[i];
        }
        
        return res;
    }
};
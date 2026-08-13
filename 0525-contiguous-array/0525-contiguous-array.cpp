class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans=0;
        int sum=0;
        unordered_map<int,int>f;
        f[0] = -1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                sum+=-1;
            }
            else
            {
                sum+=1;
            }
           
            if(f.find(sum)!=f.end())
            {
                ans=max(ans,i-f[sum]);
            }
            else
            {
                f[sum]=i;
            }
        }
        return ans;
    }
};
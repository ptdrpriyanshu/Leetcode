class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>f;
        f[0]=1;
        int sum=0;int res=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int q=sum-k;
            int freq=f[q];
            res=res+freq;

            f[sum]++;
        }
        return res;
    }
};
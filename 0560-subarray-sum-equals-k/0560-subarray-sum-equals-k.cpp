class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            int need=sum-k;
            int f=mp[need];
            ans=ans+f;
            mp[sum]++;
        }

      return ans;
    }
};
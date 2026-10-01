class Solution {
public:
    int maxdigit(int n)
    {
        int maxi=INT_MIN;
        while(n>0)
        {
            int digit=n%10;
            maxi=max(maxi,digit);
            n=n/10;
        }
        return maxi;
    }
    int maxSum(vector<int>& nums) {
        unordered_map<int ,int>f;
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            int md=maxdigit(nums[i]);
            if(f.find(md)!=f.end())
            {
                ans=max(ans,f[md]+nums[i]);
            }

            f[md]=max(f[md],nums[i]);
        }

        return ans;


    }
};
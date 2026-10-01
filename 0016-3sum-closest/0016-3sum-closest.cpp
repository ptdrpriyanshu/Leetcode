class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
       
        int diff=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int l=i+1;
            int r=n-1;

            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];

                int d=abs(target-sum);
                if(d<diff)
                {
                    diff=d;
                    ans=sum;
                }

                if(sum==target)
                {
                    return ans;
                }
                else if(sum<target)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return ans;
    }
};
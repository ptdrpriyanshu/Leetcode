class Solution {
public:
    int hcf(int a,int b)
    {
        while(b!=0)
        {
            int r=a%b;
            a=b;
            b=r;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int large=INT_MIN;
        int small=INT_MAX;
        for(int i=0;i<n;i++)
        {
            large=max(large,nums[i]);
            small=min(small,nums[i]);
        }
        return hcf(large,small);
    }
};
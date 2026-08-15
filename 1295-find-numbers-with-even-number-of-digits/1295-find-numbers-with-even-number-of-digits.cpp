class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int res=0;

        for(int i=0;i<n;i++)
        {
            int count=0;
            int a=nums[i];
            while(a>0)
            {
                a=a/10;
                count++;
            }

            if(count%2==0)
            {
                res++;
            }

        }
        return res;
    }
};
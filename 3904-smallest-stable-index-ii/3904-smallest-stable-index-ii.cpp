class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int minel=INT_MAX;
        int n=nums.size();
        vector<int>mineleIndex(n);
        for(int i=n-1;i>=0;i--)
        {
            minel=min(minel,nums[i]);
            mineleIndex[i]=minel;
        }
        int maxele=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxele=max(maxele,nums[i]);

            if(maxele-mineleIndex[i]<=k)
            return i;
        }
return -1;
    }
    

};
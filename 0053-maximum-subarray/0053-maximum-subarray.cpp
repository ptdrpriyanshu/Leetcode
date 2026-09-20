class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n=a.size();
        int bestend=a[0];
        int ans=a[0];

        for(int i=1;i<n;i++)
        {
            int v1=a[i];
            int v2=a[i]+bestend;
            bestend=max(v1,v2);
            ans=max(ans,bestend);
        }
        return ans;
    }
};
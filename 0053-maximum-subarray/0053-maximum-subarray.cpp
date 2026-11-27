class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int ans=a[0];
        int bestending=a[0];

        for(int i=1;i<a.size();i++)
        {
            int v1=a[i];
            int v2=bestending+a[i];
            bestending=max(v1,v2);
            ans=max(ans,bestending);
        }
        return ans;
    }
};
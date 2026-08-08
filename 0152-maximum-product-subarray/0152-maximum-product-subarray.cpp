class Solution {
public:
    int maxProduct(vector<int>& a) {
        int ans=a[0];
        int bestmin=a[0];
        int bestmax=a[0];
        for(int i=1;i<a.size();i++)
        {
            int v1=a[i];
            int v2=a[i]*bestmax;
            int v3=a[i]*bestmin;
            
            int maxi=max(v1,max(v2,v3));
            int mini=min(v1,min(v2,v3));

            bestmax=maxi;
            bestmin=mini;

            ans=max(ans,bestmax);
        }
        return ans;
    }
};
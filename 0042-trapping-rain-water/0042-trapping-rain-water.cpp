class Solution {
public:
    int trap(vector<int>& ht) {
        int n=ht.size();
        vector<int>lMax(n,0);
        vector<int>rMax(n,0);
        int ans=0;
        lMax[0]=ht[0];
        rMax[n-1]=ht[n-1];
        for(int i=1;i<n;i++)
        {
            lMax[i]=max(lMax[i-1],ht[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            rMax[i]=max(rMax[i+1],ht[i]);
        }

        for(int i=0;i<n;i++)
        {
            ans+=min(lMax[i],rMax[i])-ht[i];
        }
        return ans;
    }
};
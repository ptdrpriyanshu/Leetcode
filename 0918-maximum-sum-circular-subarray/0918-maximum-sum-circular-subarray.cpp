class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        int n=a.size();
        int maxend=a[0];
        int minend=a[0];
        int maxans=a[0];
        int minans=a[0];
        int sum=a[0];
        int res=INT_MIN;
        for(int i=1;i<n;i++)
        {
            sum+=a[i];

            maxend=max(maxend+a[i],a[i]);
            maxans=max(maxans,maxend);

            minend=min(minend+a[i],a[i]);
            minans=min(minans,minend);
        }
        int newmin=sum-minans;
        if(maxans<0) return maxans;
        res=max(maxans,newmin);
        return res;

    }
};
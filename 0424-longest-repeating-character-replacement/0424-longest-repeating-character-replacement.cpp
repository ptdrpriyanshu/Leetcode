class Solution {
public:
    int check(vector<int> &arr)
    {
        int mcount=-1;
        for(int i=0;i<256;i++)
        {
            mcount=max(mcount,arr[i]);
        }
        return mcount;
    }
    int characterReplacement(string s, int k) {
        int low=0;
        vector<int>f(256,0);
        int res=-1;
        for(int high=0;high<s.size();high++)
        {
            f[s[high]]++;
            int len=high-low+1;
            int maxc=check(f);
            int diff=len-maxc;
            while(diff>k)
            {
                f[s[low]]--;
                low++;
                len=high-low+1;
                maxc=check(f);
                diff=len-maxc;
            }
           len=high-low+1;;
           res=max(res,len);
        }
        return res;
    }
};
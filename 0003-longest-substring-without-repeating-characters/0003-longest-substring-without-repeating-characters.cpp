class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>f;
        int res=0;
        int low=0;
        for(int high=0;high<s.size();high++)
        {
            f[s[high]]++;
            int l=high-low+1;
            while(f.size()<l)
            {
                f[s[low]]--;
                if(f[s[low]]==0)
                {
                    f.erase(s[low]);
                }
                low++;
                l=high-low+1;
            }
            int len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};
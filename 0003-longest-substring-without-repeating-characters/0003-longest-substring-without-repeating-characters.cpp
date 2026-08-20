class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int n=s.size();
        int high;
        int res=-1;
        unordered_map<char,int>f;
        for(high=0;high<n;high++)
        {
            f[s[high]]++;
            int k=high-low+1;
            while(f.size()<k)
            {
                f[s[low]]--;
                if(f[s[low]]==0) 
               
                f.erase(s[low]);

                low++;
                k=high-low+1;
            }
            
            int len=high-low+1;
            res=max(res,len);
        }
        if(res==-1)
        return 0;
        return res;
    }
};
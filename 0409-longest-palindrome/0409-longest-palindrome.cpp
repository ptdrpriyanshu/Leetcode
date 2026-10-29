class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>f;
        for(int i=0;i<s.size();i++)
        {
            f[s[i]]++;
        }
        int count=0;
        bool odd=false;
        for(auto i:f)
        {
            int val=i.second;
            if(val%2==0)
            {
                count+=val;
            }
            else
            {
                count+=val-1;
                odd=true;
            }
        }
        if(odd) count++;

        return count;
    }
};
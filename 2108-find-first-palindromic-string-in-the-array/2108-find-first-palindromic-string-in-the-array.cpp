class Solution {
public:
    bool plindrome(string s)
    {
        string t=s;
        
        reverse(s.begin(),s.end());
        if(t==s)
        return true;
    return false;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            if(plindrome(words[i]))
            {
                return words[i];
            }
        }
        return "";
    }
};
class Solution {
public:
    int scoreOfParentheses(string s) {
        int count=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            count++;
            else{
                count--;
                if(s[i-1]=='(')
                {
                    ans+=(1<<count);
                }
            }
        }

        return ans;
    }
};
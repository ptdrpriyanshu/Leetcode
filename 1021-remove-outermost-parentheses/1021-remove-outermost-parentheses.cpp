class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string t;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(count>0)
                {
                    t.push_back(s[i]);
                }

                count++;
            }
            else
            {
                count--;
                if(count>0)
                {
                    t.push_back(s[i]);
                }
            }

        }
        return t;
    }
};
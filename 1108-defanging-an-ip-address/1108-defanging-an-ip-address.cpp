class Solution {
public:
    string defangIPaddr(string s) {
        string t;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')
            {
                t.push_back('[');
                t.push_back('.');
                t.push_back(']');
            }
            else
            {
                t.push_back(s[i]);
            }
        }
        return t;
    }
};
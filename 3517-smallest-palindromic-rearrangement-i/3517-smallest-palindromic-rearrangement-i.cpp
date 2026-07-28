class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int> f;
        string st="";
        char mid=0;
        
        for(char c : s)
        {
            f[c]++;
        }
        for(auto c : f)
        {
            for(int j = 0; j < c.second / 2; j++)
            {
                st.push_back(c.first);
            }
            if(c.second%2!=0)
            {
                mid=c.first;
            }
        }
        string t=st;
        if(mid != 0)
            st.push_back(mid);
        
        reverse(t.begin(),t.end());
        st.append(t);
        return st;

    }
};
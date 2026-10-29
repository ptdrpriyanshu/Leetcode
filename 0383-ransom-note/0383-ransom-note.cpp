class Solution {
public:
    bool canConstruct(string a, string b) {
        unordered_map<char,int>f1;
        unordered_map<char,int>f2;

        for(char i:a)
        {
            f1[i]++;
        }
        for(char i:b)
        {
            f2[i]++;
        }

        for(auto i:f1)
        {
            int ch=i.first;
            int freq=i.second;
            if(freq>f2[ch])
            {
                return false;
            }
        }
        return true;
    }
};
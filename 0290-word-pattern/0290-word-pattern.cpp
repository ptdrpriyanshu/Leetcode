class Solution {
public:
    bool wordPattern(string pattern, string s) {

        stringstream ss(s);

        vector<string> words;
        string word;

        while(ss >> word)
        {
            words.push_back(word);
        }

        // Number of pattern characters
        // and number of words should be same
        if(pattern.size() != words.size())
        {
            return false;
        }

        unordered_map<char,string> f;
        unordered_map<string,char> f2;

        for(int i = 0; i < pattern.length(); i++)
        {
            // pattern -> word
            if(f.find(pattern[i]) != f.end())
            {
                if(f[pattern[i]] != words[i])
                {
                    return false;
                }
            }
            else
            {
                f[pattern[i]] = words[i];
            }

            // word -> pattern
            if(f2.find(words[i]) != f2.end())
            {
                if(f2[words[i]] != pattern[i])
                {
                    return false;
                }
            }
            else
            {
                f2[words[i]] = pattern[i];
            }
        }

        return true;
    }
};
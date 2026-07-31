class Solution {
public:
    int minimumPushes(string word) {
       unordered_map<char,int> mp;
        for(int i=0;i<word.size();i++)
        {
            mp[word[i]]++;
        }

        vector<int>freq;
        for(auto ch:mp)
        {
            freq.push_back(ch.second);
        }
        sort(freq.begin(),freq.end(),greater<int>());
        int ans = 0;

        for(int i = 0; i < freq.size(); i++)
        {
           
            ans += freq[i] * ((i/8) + 1);
        }
    return ans;
    }
};
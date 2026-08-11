class Solution {
public:
    string frequencySort(string s) {
        string res = "";
        int n = s.size();

        unordered_map<char, int> f;

        for(int i = 0; i < n; i++) {
            f[s[i]]++;
        }

        vector<vector<char>> bucket(n + 1);

        for(auto i : f) {
            bucket[i.second].push_back(i.first);
        }

        for(int i = n; i >= 1; i--) {
            for(char ch : bucket[i]) {
                for(int j = 0; j < i; j++) {
                    res.push_back(ch);
                }
            }
        }

        return res;
    }
};
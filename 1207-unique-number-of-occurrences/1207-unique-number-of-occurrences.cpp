class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> f;

        for(int x : arr)
        {
            f[x]++;
        }

        unordered_set<int> s;

        for(auto i : f)
        {
            if(s.count(i.second))
            {
                return false;
            }
            s.insert(i.second);
        }

        return true;
    }
};
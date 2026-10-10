struct cmp {
    // Mistake 1: Comparator mein frequency (second) compare karni hai
    bool operator()(pair<int,int>& a, pair<int,int>& b)
    {
        if (a.first != b.first) {
            return a.first > b.first;
        }

        // Mistake 2: Yahan a.second aur b.second compare honge
        return a.second > b.second;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>q;
        unordered_map<int,int>f;
        vector<int>res;
        for(int c:nums)
        {
            f[c]++;
        }

        for(auto i:f)
        {
            int ch=i.first;
            int freq=i.second;
            
          pair<int,int> curr = {freq, ch};
            if(q.size()<k)
            {
                q.push(curr);
                continue;
            }
            if(freq<=q.top().first)
                continue;
            
            q.pop();
            q.push(curr);
           
        }

        while(!q.empty())
        {
            res.push_back(q.top().second);
            q.pop();
        }
        return res;
    }
};
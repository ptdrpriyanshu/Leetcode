struct cmp {
    bool operator()(const pair<int, string>& a,
                    const pair<int, string>& b) const {
        if (a.first != b.first) {
            return a.first > b.first;
        }
        return a.second < b.second;
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& s, int k) {
        vector<string>res;
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp>pq;
        unordered_map<string,int>f;

        for(int i=0;i<s.size();i++){
            f[s[i]]++;
        }

        for(auto i:f)
        {
            string ch=i.first;
            int freq=i.second;

            pair<int,string>curr={freq,ch};

            if(pq.size()<k)
            {
                pq.push(curr);
                continue;
            }

            if (curr.first > pq.top().first ||
                (curr.first == pq.top().first &&
                 curr.second < pq.top().second)) {
                pq.pop();
               pq.push(curr);
            }

        }

        while(!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        reverse(res.begin(),res.end());
        return res;

    }
};
struct cmp{
    
    bool operator()(const pair<int,int>&a ,const pair<int,int>&b)
    {
        if(a.first!=b.first)
        {
            return a.first>b.first;
        }
        return a.second>b.second;
    }
};

class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>,cmp>pq;

        unordered_map<int,int>f;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            f[nums[i]]++;
        }
        for(auto i:f)
        {
            int ch=i.first;
            int freq=i.second;
            pair<int,int>curr={freq,ch};

            if(pq.size()<k)
            {
                pq.push(curr);
                continue;
            }

            if(pq.top().first>=freq)
            {
                continue;
            }   
            pq.pop();
            pq.push(curr);
            
        }
        while(!pq.empty())
            {
                res.push_back(pq.top().second);
                pq.pop();
            }
        return res;
    }

};
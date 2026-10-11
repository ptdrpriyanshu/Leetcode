class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& a, int k) {
        int n=a.size();
        vector<vector<int>>res;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++)
        {
            int d=a[i][0]*a[i][0]+a[i][1]*a[i][1];
            pq.push({d,i});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }

        while(!pq.empty())
        {
            res.push_back(a[pq.top().second]);
            pq.pop();
        }
        return res;
    }
};
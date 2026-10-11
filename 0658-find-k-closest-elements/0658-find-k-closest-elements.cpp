class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>pq;

        for(int i=0;i<arr.size();i++)
        {
            int d=abs(arr[i]-x);
            
            pq.push({d,i});

            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int>res;
        while(!pq.empty())
        {
            res.push_back(arr[pq.top().second]);
            pq.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};
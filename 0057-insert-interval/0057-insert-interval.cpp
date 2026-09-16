class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& newInterval) {
        vector<vector<int>>res;
        bool red=false;
        for(int i=0;i<a.size();i++)
        {
            if(red==false && a[i][0]>=newInterval[0])
            {
                res.push_back(newInterval);
                red=true;

            }
           res.push_back({a[i][0], a[i][1]});

        }

        if(red==false)
        {
            res.push_back(newInterval);
        }

        int start1=res[0][0];
        int end1=res[0][1];
         vector<vector<int>>final;

        for(int i=1;i<=res.size()-1;i++)
        {
            int start2=res[i][0];
            int end2=res[i][1];
            if(end1>=start2)
            {
                start1=start1;
                end1=max(end1,end2);
            }
            else
            {
                final.push_back({start1,end1});
                start1=start2;
                end1=end2;
            }
       
        }
         final.push_back({start1,end1});
        return final;
    }
};
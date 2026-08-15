class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<int>row;
        vector<int>col;
        vector<int>ans;
       
       int mini;
       int maxi;
        for(int i=0;i<n;i++)
        {
            mini=INT_MAX;
            for(int j=0;j<m;j++)
            {
               mini=min(mini,arr[i][j]);
            }
            row.push_back(mini);
        }

        for(int j=0;j<m;j++)
        {
            maxi = INT_MIN;  // reset for each row
            for(int i=0;i<n;i++)
            {
               maxi=max(maxi,arr[i][j]);
            }
            col.push_back(maxi);
        }

        for(int i=0;i<row.size();i++)
        {
            for(int j=0;j<col.size();j++)
            {
                if(row[i]==col[j])
                 ans.push_back(row[i]);
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& a, int k) {

        int m = a.size();
        int n = a[0].size();

        vector<vector<int>> ans(m, vector<int>(n));

        k = k % (m * n);

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int ind = i * n + j;
                int newind = (ind + k) % (m * n);

                int r = newind / n;
                int c = newind % n;

                ans[r][c] = a[i][j];
            }
        }

        return ans;
    }
};
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& w, char x) {
        int n=w.size();
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<w[i].size();j++)
            {
                if(w[i][j]==x)
                {
                    res.push_back(i);
                    break;
                }
            }
        }
        return res;
    }
};
class Solution {
public:
    int minimumPushes(string word) {
        int count=0;
        int n=word.size();
        for(int i=0;i<n;i++)
        {
            count=count+(i/8+1);
        }
        return count;
    }
};
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>f;
        for(int i=0;i<n;i++)
        {
            f[nums[i]]++;
        }

        for(int i=1;;i++)
        {
            if(f.find(k*i)==f.end())
            {
                return k*i;
            }
        }
        
    }
};
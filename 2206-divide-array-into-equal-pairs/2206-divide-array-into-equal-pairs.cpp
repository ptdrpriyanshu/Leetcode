class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>f;

        for(int i=0;i<nums.size();i++)
        {
            f[nums[i]]++;
        }
        for(auto i:f)
        {
            if(i.second%2!=0)
            {
                return false;
            }
            
        }
        return true;

    }
};
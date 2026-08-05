class Solution {
public:
    int totalFruit(vector<int>& nums) {
        unordered_map<int,int>mp;
        int low=0;
        int ans=-1;
        for(int high=0;high<nums.size();high++)
        {
            mp[nums[high]]++;
            while(mp.size()>2)
            {
                mp[nums[low]]--;
                if(mp[nums[low]]==0)
                {
                    mp.erase(nums[low]);
                }
                low++;
            }

            
                int leni=high-low+1;
                ans=max(ans,leni);
            
        }
        return ans;
    }
};
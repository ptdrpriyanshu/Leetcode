class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<=n-k;i++)
        {
            set<int>s;
            for(int j=i;j<i+k;j++)
            {
                s.insert(nums[j]);
            }
            
            for(auto i:s)
            {
                mp[i]++;
            }
           
        }
        int ans=-1;
         for(auto i : mp)
            {
                if(i.second==1)
                {
                    ans=max(ans,i.first);
                }
            }

        return ans;
    }
};
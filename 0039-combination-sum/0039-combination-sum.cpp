class Solution {
public:
    void fun(vector<int>& nums,vector<int>& curr,int i,int target,vector<vector<int>>&ans)
    {
        if(target==0)
        {
            ans.push_back(curr);
            return ;
        }
        if(i==nums.size())
        {
            return ;
        }

        if(nums[i]<=target)
        {
            curr.push_back(nums[i]);
            fun(nums,curr,i,target-nums[i],ans);
            curr.pop_back();

        }
          fun(nums,curr,i+1,target,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> curr;
        int i=0;
        vector<vector<int>>ans;
        fun(candidates,curr,i,target,ans);
        return ans;
        
    }
};
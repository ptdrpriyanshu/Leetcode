class Solution {
public:
    void fun(vector<vector<int>>&ans,int i,vector<int>&curr,vector<int>&nums)
    {
        if(i==nums.size())
        {
            ans.push_back(curr);
            return ;
        }

        curr.push_back(nums[i]);
        fun(ans,i+1,curr,nums);

        curr.pop_back();
        fun(ans,i+1,curr,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int i=0;
        vector<int>curr;
        fun(ans,i,curr,nums);
        return ans;
    }

};
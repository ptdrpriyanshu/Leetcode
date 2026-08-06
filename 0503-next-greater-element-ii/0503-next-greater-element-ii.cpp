class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {

        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;

        // Circular array ke liye preload
        for(int i = n-1; i >= 0; i--)
        {
            st.push(arr[i]);
        }

        // Same Next Greater Element template
        for(int i = n-1; i >= 0; i--)
        {
            while(!st.empty() && st.top() <= arr[i])
            {
                st.pop();
            }

            if(st.empty())
                ans[i] = -1;
            else
                ans[i] = st.top();

            st.push(arr[i]);
        }

        return ans;
    }
};
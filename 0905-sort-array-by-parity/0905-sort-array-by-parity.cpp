class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            if(arr[low]%2==0)
            {
                low++;
            }
            else if(arr[high]%2!=0)
            {
                high--;
            }
            else
            {
                swap(arr[low],arr[high]);
            }
        }
        return arr;
    }
};
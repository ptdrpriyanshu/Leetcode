class Solution {
public:
    long long fun(vector<int>& arr, int n, int speed)
    {
        long long hr = 0;

        for(int i = 0; i < n; i++)
        {
            hr += ((long long)arr[i] + speed - 1) / speed;
        }

        return hr;
    }

    int minEatingSpeed(vector<int>& arr, int guard)
    {
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());
        int res = high;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            long long hr = fun(arr, arr.size(), mid);

            if(hr <= guard)
            {
                res = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return res;
    }
};
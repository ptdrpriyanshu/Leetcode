
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            long long p = 1;
            long long g = 0;
            long long l = 1;

            for (int j = i; j < n; j++) {

                // Prevent product overflow
                if (p > LLONG_MAX / nums[j]) {
                    break;
                }

                p *= nums[j];

                g = gcd(g, (long long)nums[j]);

                long long x = gcd(l, (long long)nums[j]);
                l = (l / x) * nums[j];

                // Check product equivalent condition
                if (p == g * l) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};

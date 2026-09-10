class Solution {
public:
    bool isPalindrome(int x) {
        int t=x;
        long long n=0;
        while(x>0)
        {
            n=n*10+x%10;
            x=x/10;
        }

        return t==n;
    }
};
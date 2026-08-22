class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int t=n;
        while(n>0)
        {
            sum=sum+(n%10);
            pro=pro*(n%10);
            n=n/10;

        }
        int ans=sum+pro;
        if(t%ans==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
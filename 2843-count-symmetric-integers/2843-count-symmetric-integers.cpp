class Solution {
public:
    int check(int n)
    {
        int t=n;
        int count=0;
        while(n>0)
        {
            count++;
            n=n/10;
        }
        int sum=0;
        if(count%2!=0)
            return false;
        
        int sum1=0;
        int sum2=0;

        int half=count/2;

        for(int i=0;i<half;i++)
        {
            sum1=sum1+t%10;
            t=t/10;
        }
        for(int i=0;i<half;i++)
        {
            sum2=sum2+t%10;
            t=t/10;
        }

        return sum1==sum2;

        
        
    }
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++)
        {
            if(check(i))
                ans++;

        }
        return ans;
    }
};
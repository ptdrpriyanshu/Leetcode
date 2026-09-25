class Solution {
public:
    void divide(int n,int &count)
    {
        int t=n;
        while(n>0)
        {

            int digit=n%10;
            if(t%digit==0)
            {
                count++;
            }
            n=n/10;
        }
    }
    int countDigits(int num) {
        int count=0;
       
    divide(num,count);
       
       return count;

    }
};
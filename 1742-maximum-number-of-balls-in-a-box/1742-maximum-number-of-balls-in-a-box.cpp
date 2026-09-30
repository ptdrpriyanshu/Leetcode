class Solution {
public:
    int count(int num)
    {
        int sum=0;
        while(num>0)
        {
            sum=sum+num%10;
            num=num/10;
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>f;
        for(int i=lowLimit;i<=highLimit;i++)
        {
            f[count(i)]++;
        }
        int ch=INT_MIN;
        for(auto i:f)
        {
            
            if(ch<i.second)
            {
                ch=i.second;
            }
        }

        return ch;

    }

};
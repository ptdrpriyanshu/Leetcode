class Solution {
public:
    vector<int>res;
    void divide(int n)
    {
        int t=n;
         bool check=true;
        while(n>0)
        {
           
            int digit=n%10;
            if(digit==0 || t%digit!=0)
            {
                check=false;
                break;
            }
            n=n/10;
        }

            if(check)
            {
                res.push_back(t);
            }
            
    }
    vector<int> selfDividingNumbers(int left, int right) {
        
        for(int i=left;i<=right;i++)
        {
            divide(i);
        }
        return res;
    }
};
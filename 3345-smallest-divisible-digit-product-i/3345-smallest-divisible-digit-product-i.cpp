class Solution {
public:
    int smallestNumber(int n, int t) {
        
       for(int num = n; ; num++)
        {
            int pro=1;
            int temp=num;
            while(temp != 0)
            {
                int digit = temp % 10;
                pro = pro * digit;
                temp = temp / 10;
            }
            if(pro%t==0)
            {
                return num;
            }
        
        }
       
    }
};
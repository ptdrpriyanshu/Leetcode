class Solution {
public:
    string digitSum(string s, int k) {
       int n=s.size();
       string t;
       int sum=0;
       while(s.size()>k)
        {
            t="";
            for(int j=0;j<s.size();j=j+k)
            {
                int sum=0;
                for(int i=j;i < j + k && i < s.size();i++) 
                {
                    sum=sum+s[i]-'0';
                    
                }
                t=t+to_string(sum);
            }
            s=t;
        } 

        return s;

    }
};
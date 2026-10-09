class Solution {
public:
    bool validprom(string s,int left,int right)
    {
        while(left<right)
        {
            if(s[left]==s[right])
            {
                left++;
                right--;
            }
            else
            {
                return false;
            }

            
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
            if(s[left]==s[right])
            {
                left++;
                right--;
            }
            else
            {
                return validprom(s,left+1,right) || validprom(s,left,right-1);
            }
            
        }
        return true;
    }
};
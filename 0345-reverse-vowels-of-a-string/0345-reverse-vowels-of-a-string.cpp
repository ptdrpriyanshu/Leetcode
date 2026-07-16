class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'
        ||ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
        { 
           return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int n=s.size();
        int left=0;
        int right=n-1;
        while(left<=right)
        {
            if(isVowel(s[left]) && isVowel(s[right]))
            {
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if(!isVowel(s[left]))
            {
                left++;
            }
            else if(!isVowel(s[right]))
            {
                right--;
            }
        }
        return s;
    }
};
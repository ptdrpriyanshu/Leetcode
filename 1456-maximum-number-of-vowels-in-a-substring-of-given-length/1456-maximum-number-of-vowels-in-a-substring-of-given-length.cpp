class Solution {
public:
    bool isvowel(char s) {
        return s=='a'||s=='e'||s=='i'||s=='o'||s=='u';
    }

    int maxVowels(string s, int k) {
        int low = 0;
        int count = 0;
        int res = 0;
        for (int high = 0; high < s.size(); high++) {
            if(isvowel(s[high]))
            count++;
            
            while (high - low + 1 > k) {
                if(isvowel(s[low]))
                count--;

                low++;
            }
            if (high - low + 1 == k) {
                res = max(res, count);
            }
        }
            return res;
        }
    };
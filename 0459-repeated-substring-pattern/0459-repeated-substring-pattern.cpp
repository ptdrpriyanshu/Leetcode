#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        // Try every possible substring length
        for (int len = 1; len <= n / 2; len++) {

            // Substring length must divide n
            if (n % len != 0)
                continue;

            string pattern = s.substr(0, len);
            string temp = "";

            // Repeat the pattern
            int times = n / len;
            for (int i = 0; i < times; i++) {
                temp += pattern;
            }

            if (temp == s)
                return true;
        }

        return false;
    }
};